using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;
using Microsoft.AspNetCore.Mvc.Rendering;
using Microsoft.EntityFrameworkCore;
using WarwicksRemovals.Data;
using WarwicksRemovals.Models;

namespace WarwicksRemovals.Pages.Quotes
{
    public class CreateModel : PageModel
    {
        private readonly WarwicksRemovals.Data.ApplicationDbContext _context;

        public CreateModel(WarwicksRemovals.Data.ApplicationDbContext context)
        {
            _context = context;
        }

        public string CookieData { get; set; }
        public IList<string> RemovalQuoteData { get; set; }
        public IList<SelectListData> TitleData { get; set; }
        public IList<SelectListData> PropertyTypeData { get; set; }
        public string SavedQuoteData { get; set; }


        public async Task OnGetAsync()
        {
            //Get saved values
            CookieData = Request.Cookies["RemovalQuoteData"];

            if (!String.IsNullOrEmpty(CookieData))
            {
                RemovalQuoteData = CookieData.Split("&");

                RemovalQuote = new RemovalQuote();

                foreach (string element in RemovalQuoteData)
                {
                    int splitPos = element.IndexOf("=");
                    int fldLen = element.Length;

                    string key = element.Substring(0, splitPos);
                    string value = element.Substring(splitPos + 1, fldLen - splitPos - 1);

                    int valueInt;
                    bool valueBool;
                    switch (key)
                    {
                        case "RemovalQuote.Title":
                            RemovalQuote.Title = value;
                            break;
                        case "RemovalQuote.Forename":
                            RemovalQuote.Forename = value;
                            break;
                        case "RemovalQuote.Surname":
                            RemovalQuote.Surname = value;
                            break;
                        case "RemovalQuote.Company":
                            RemovalQuote.Company = value;
                            break;
                        case "RemovalQuote.MoveDate":
                            RemovalQuote.MoveDate = value;
                            break;
                        case "RemovalQuote.TelNumber":
                            RemovalQuote.TelNumber = value;
                            break;
                        case "RemovalQuote.TelExtension":
                            if (value.Length > 0)
                            {
                                int.TryParse(value, out valueInt);
                                RemovalQuote.TelExtension = valueInt;
                            }
                            else
                            {
                                RemovalQuote.TelExtension = null;
                            }
                            break;
                        case "RemovalQuote.Mobile":
                            RemovalQuote.Mobile = value;
                            break;
                        case "RemovalQuote.Email":
                            RemovalQuote.Email = value;
                            break;
                        case "RemovalQuote.FromAddress1":
                            RemovalQuote.FromAddress1 = value;
                            break;
                        case "RemovalQuote.FromAddress2":
                            RemovalQuote.FromAddress2 = value;
                            break;
                        case "RemovalQuote.FromAddress3":
                            RemovalQuote.FromAddress3 = value;
                            break;
                        case "RemovalQuote.FromAddress4":
                            RemovalQuote.FromAddress4 = value;
                            break;
                        case "RemovalQuote.FromPostcode":
                            RemovalQuote.FromPostcode = value;
                            break;
                        case "RemovalQuote.FromPropertyType":
                            int.TryParse(value, out valueInt);
                            RemovalQuote.FromPropertyType = valueInt;
                            break;
                        case "RemovalQuote.FromNumBedrooms":
                            int.TryParse(value, out valueInt);
                            RemovalQuote.FromNumBedrooms = valueInt;
                            break;
                        case "RemovalQuote.IsMovingToStorage":
                            bool.TryParse(value, out valueBool);
                            RemovalQuote.IsMovingToStorage = valueBool;
                            break;
                        case "RemovalQuote.ToAddress1":
                            RemovalQuote.ToAddress1 = value;
                            break;
                        case "RemovalQuote.ToAddress2":
                            RemovalQuote.ToAddress2 = value;
                            break;
                        case "RemovalQuote.ToAddress3":
                            RemovalQuote.ToAddress3 = value;
                            break;
                        case "RemovalQuote.ToAddress4":
                            RemovalQuote.ToAddress4 = value;
                            break;
                        case "RemovalQuote.ToPostcode":
                            RemovalQuote.ToPostcode = value;
                            break;
                        case "RemovalQuote.ToPropertyType":
                            int.TryParse(value, out valueInt);
                            RemovalQuote.ToPropertyType = valueInt;
                            break;
                        case "RemovalQuote.ToNumBedrooms":
                            int.TryParse(value, out valueInt);
                            RemovalQuote.ToNumBedrooms = valueInt;
                            break;
                        case "RemovalQuote.Comments":
                            RemovalQuote.Comments = value;
                            break;
                        default:
                            break;
                    }
                }
            }

            string selectListDomain = null;

            selectListDomain = "TITLE";
            TitleData = await _context.SelectListData
                .FromSqlInterpolated($"EXEC SPR_SelectListData @Domain={selectListDomain}")
                .ToListAsync();

            ViewData["TitleData"] = new SelectList(TitleData, "Code", "Description");

            selectListDomain = "PROPERTY_TYPE";
            PropertyTypeData = await _context.SelectListData
                .FromSqlInterpolated($"EXEC SPR_SelectListData @Domain={selectListDomain}")
                .ToListAsync();

            ViewData["PropertyTypeData"] = new SelectList(PropertyTypeData, "Code", "Description");
        }

        [BindProperty]
        public RemovalQuote RemovalQuote { get; set; }

        // To protect from overposting attacks, enable the specific properties you want to bind to, for
        // more details, see https://aka.ms/RazorPagesCRUD.
        public async Task<IActionResult> OnPostAsync()
        {
            if (!ModelState.IsValid)
            {
                return Page();
            }

            _context.RemovalQuote.Add(RemovalQuote);
            await _context.SaveChangesAsync();

            return RedirectToPage("./Index");
        }
    }
}

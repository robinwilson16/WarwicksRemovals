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
    public class EditModel : PageModel
    {
        private readonly WarwicksRemovals.Data.ApplicationDbContext _context;

        public EditModel(WarwicksRemovals.Data.ApplicationDbContext context)
        {
            _context = context;
        }

        [BindProperty]
        public RemovalQuote RemovalQuote { get; set; }

        public async Task<IActionResult> OnGetAsync(int? id)
        {
            if (id == null)
            {
                return NotFound();
            }

            RemovalQuote = await _context.RemovalQuote.FirstOrDefaultAsync(m => m.RemovalQuoteID == id);

            if (RemovalQuote == null)
            {
                return NotFound();
            }
            return Page();
        }

        // To protect from overposting attacks, enable the specific properties you want to bind to, for
        // more details, see https://aka.ms/RazorPagesCRUD.
        public async Task<IActionResult> OnPostAsync()
        {
            if (!ModelState.IsValid)
            {
                return Page();
            }

            _context.Attach(RemovalQuote).State = EntityState.Modified;

            try
            {
                await _context.SaveChangesAsync();
            }
            catch (DbUpdateConcurrencyException)
            {
                if (!RemovalQuoteExists(RemovalQuote.RemovalQuoteID))
                {
                    return NotFound();
                }
                else
                {
                    throw;
                }
            }

            return RedirectToPage("./Index");
        }

        private bool RemovalQuoteExists(int id)
        {
            return _context.RemovalQuote.Any(e => e.RemovalQuoteID == id);
        }
    }
}

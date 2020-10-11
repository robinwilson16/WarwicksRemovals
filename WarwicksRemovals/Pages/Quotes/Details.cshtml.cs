using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;
using Microsoft.EntityFrameworkCore;
using WarwicksRemovals.Data;
using WarwicksRemovals.Models;

namespace WarwicksRemovals.Pages.Quotes
{
    public class DetailsModel : PageModel
    {
        private readonly WarwicksRemovals.Data.ApplicationDbContext _context;

        public DetailsModel(WarwicksRemovals.Data.ApplicationDbContext context)
        {
            _context = context;
        }

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
    }
}

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
    public class IndexModel : PageModel
    {
        private readonly WarwicksRemovals.Data.ApplicationDbContext _context;

        public IndexModel(WarwicksRemovals.Data.ApplicationDbContext context)
        {
            _context = context;
        }

        public IList<RemovalQuote> RemovalQuote { get;set; }

        public async Task OnGetAsync()
        {
            RemovalQuote = await _context.RemovalQuote.ToListAsync();
        }
    }
}

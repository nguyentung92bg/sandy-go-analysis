/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$TrackIsIapUser
void Dino_Tracking_DinoUserPropertyTracking__TrackIsIapUser (bool isIapUser, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02580e74) */
/* WARNING: Removing unreachable block (ram,0x02580e8c) */
/* WARNING: Removing unreachable block (ram,0x02580e94) */
/* WARNING: Removing unreachable block (ram,0x02580ebc) */
/* WARNING: Removing unreachable block (ram,0x02580ea0) */
/* WARNING: Removing unreachable block (ram,0x02580eac) */
/* WARNING: Removing unreachable block (ram,0x02580ecc) */
/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$TrackIsIapUser
   void Dino_Tracking_DinoUserPropertyTracking__TrackIsIapUser (bool isIapUser, const MethodInfo*
   method); */

void Dino_Tracking_DinoUserPropertyTracking__TrackIsIapUser_2481398(void)

{
  ulong uVar1;
  
  if ((bRam0000000004f9cfb3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2410);
    FUN_02132f7c(PTR_DAT_04caccf0);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9cfb3 = 1;
  }
  if ((bRam0000000004f9cfb9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caabc8);
    bRam0000000004f9cfb9 = 1;
  }
  uVar1 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&stack0xffffffffffffffd8);
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


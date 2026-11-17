/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_Anchor
int64_t Dino_BusSand_App_Meta_WinStreak__get_Anchor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_Anchor
   int64_t Dino_BusSand_App_Meta_WinStreak__get_Anchor (const MethodInfo* method); */

long Dino_BusSand_App_Meta_WinStreak__get_Anchor_2292a64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  double *pdVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cb2838;
  puVar1 = PTR_DAT_04cadc80;
  if ((bRam0000000004f9c1e3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb2838);
    bRam0000000004f9c1e3 = 1;
  }
  uVar6 = *(undefined8 *)puVar1;
  lVar4 = Dino_BusSand_App_Meta_WinStreak__Row_22927fc(*(undefined8 *)puVar2);
  if ((lVar4 != 0) &&
     (plVar5 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(lVar4,uVar6,0), plVar5 != (long *)0x0)
     ) {
    lVar4 = 0;
    if (plVar5 != (long *)0x0) {
      if (*plVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
        pdVar3 = (double *)thunk_FUN_0216e9e4(plVar5,0,0);
        lVar4 = -0x8000000000000000;
        if (*pdVar3 != INFINITY) {
          lVar4 = (long)*pdVar3;
        }
      }
      else if (*plVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
        System_Int64__TryParse_482f580(plVar5,&stack0xffffffffffffffe8,0);
        lVar4 = 0;
      }
    }
    return lVar4;
  }
  return 0x6acc2300;
}


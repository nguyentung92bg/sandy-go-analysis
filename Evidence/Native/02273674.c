/* IL2CPP: Dino.BusSand.App.CrashContext$$Clip
System_String_o* Dino_BusSand_App_CrashContext__Clip (System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d488c) */
/* WARNING: Removing unreachable block (ram,0x047d490c) */
/* WARNING: Removing unreachable block (ram,0x047d48ac) */
/* IL2CPP: Dino.BusSand.App.CrashContext$$Clip
   System_String_o* Dino_BusSand_App_CrashContext__Clip (System_String_o* s, const MethodInfo*
   method); */

long Dino_BusSand_App_CrashContext__Clip_2173674(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  undefined *puVar6;
  
  if ((bRam0000000004f9b8b9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b8b9 = 1;
  }
  uVar2 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0x78 < *(int *)(param_1 + 0x10)) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 < 0) {
        thunk_FUN_021985a8(PTR_DAT_04cbe6f8,0,0x78,0);
        uVar3 = thunk_FUN_0216e89c();
        uVar4 = thunk_FUN_021985a8(PTR_DAT_04cbfe80);
        puVar6 = PTR_DAT_04d0b4a0;
      }
      else {
        if (-1 < iVar1 + -0x78) {
          if (iVar1 == 0x78) {
            return param_1;
          }
          lVar7 = thunk_FUN_0216c29c(0x78);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Buffer__Memmove_485a338(lVar7 + 0x14,param_1 + 0x14,0xf0,0);
          return lVar7;
        }
        thunk_FUN_021985a8(PTR_DAT_04cbe6f8,0,0x78,0);
        uVar3 = thunk_FUN_0216e89c();
        uVar4 = thunk_FUN_021985a8(PTR_DAT_04cc3fb0);
        puVar6 = PTR_DAT_04d0b4a8;
      }
      uVar5 = thunk_FUN_021985a8(puVar6);
      System_ArgumentOutOfRangeException___ctor_47b3440(uVar3,uVar4,uVar5,0);
      uVar4 = thunk_FUN_021985a8(PTR_DAT_04d0b4b0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar3,uVar4);
    }
  }
  else {
    param_1 = *(long *)PTR_DAT_04ca9c30;
  }
  return param_1;
}


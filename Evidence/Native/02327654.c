/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtPeriods$$After
System_String_o* Dino_BusSand_App_Meta_BattleYachtPeriods__After (System_String_o* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtPeriods$$After
   System_String_o* Dino_BusSand_App_Meta_BattleYachtPeriods__After (System_String_o* v, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleYachtPeriods__After_2227654(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  undefined *puVar7;
  
  if ((param_1 == 0) || (iVar3 = System_String__IndexOf_46d72c4(param_1,0x2d,0), iVar3 < 0)) {
    return param_1;
  }
  iVar3 = iVar3 + 1;
  iVar2 = *(int *)(param_1 + 0x10) - iVar3;
  if (iVar3 < 0) {
    thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
    uVar4 = thunk_FUN_0216e89c();
    uVar5 = thunk_FUN_021985a8(PTR_DAT_04cbfe80);
    puVar7 = PTR_DAT_04d0b378;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 < iVar3) {
      thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
      uVar4 = thunk_FUN_0216e89c();
      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cbfe80);
      puVar7 = PTR_DAT_04d0b4a0;
    }
    else if (iVar2 < 0) {
      thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
      uVar4 = thunk_FUN_0216e89c();
      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cc3fb0);
      puVar7 = PTR_DAT_04d0b310;
    }
    else {
      if (iVar3 <= iVar1 - iVar2) {
        if (iVar2 == 0) {
          param_1 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
        }
        else if ((iVar3 != 0) || (iVar1 != iVar2)) {
          lVar8 = thunk_FUN_0216c29c(iVar2);
          if (lVar8 != 0) {
            System_Buffer__Memmove_485a338
                      (lVar8 + 0x14,param_1 + (long)iVar3 * 2 + 0x14,iVar2 * 2,0);
            return lVar8;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        return param_1;
      }
      thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
      uVar4 = thunk_FUN_0216e89c();
      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cc3fb0);
      puVar7 = PTR_DAT_04d0b4a8;
    }
  }
  uVar6 = thunk_FUN_021985a8(puVar7);
  System_ArgumentOutOfRangeException___ctor_47b3440(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_021985a8(PTR_DAT_04d0b4b0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar4,uVar5);
}


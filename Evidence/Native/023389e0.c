/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$HasActivatedCurrentCycle
bool Dino_BusSand_App_Meta_GiftPackFeature__HasActivatedCurrentCycle (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c, Dino_BusSand_App_Meta_GiftPackState_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$HasActivatedCurrentCycle
   bool Dino_BusSand_App_Meta_GiftPackFeature__HasActivatedCurrentCycle
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c,
   Dino_BusSand_App_Meta_GiftPackState_o* s, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_GiftPackFeature__HasActivatedCurrentCycle_22389e0
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000004f9bec0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9bec0 = 1;
  }
  uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack_223208c(param_2);
  if (((param_3 == 0) || ((uVar2 & 1) == 0)) || (*(int *)(param_3 + 0x14) < 1)) {
    return false;
  }
  if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  lVar3 = Dino_BusSand_App_Meta_GiftPackCycle__GetCurrentPeriodKey_22322cc(param_2,lVar3 / 1000);
  uVar2 = System_String__IsNullOrWhiteSpace_46d20a0(lVar3,0);
  if ((uVar2 & 1) != 0) {
    return false;
  }
  lVar7 = *(long *)(param_3 + 0x80);
  if (lVar3 == lVar7) {
    return true;
  }
  if (lVar3 == 0) {
    return false;
  }
  if (lVar7 == 0) {
    return false;
  }
  if (*(int *)(lVar3 + 0x10) == *(int *)(lVar7 + 0x10)) {
    lVar8 = (long)*(int *)(lVar3 + 0x10) << 1;
    lVar3 = lVar3 + 0x14;
    lVar7 = lVar7 + 0x14;
    if (lVar3 != lVar7) {
      lVar4 = System_IntPtr__op_Explicit_4878324(0,0,lVar8,0);
      uVar5 = System_IntPtr__op_Explicit_4878330(lVar8,0);
      uVar2 = System_IntPtr__op_Explicit_487833c(uVar5,0);
      if (7 < uVar2) {
        lVar8 = System_IntPtr__op_Subtraction_4878350(uVar5,8,0);
        while( true ) {
          uVar2 = System_IntPtr__op_Explicit_487833c(lVar8,0);
          uVar6 = System_IntPtr__op_Explicit_487833c(lVar4,0);
          if (uVar2 <= uVar6) {
            return *(long *)(lVar3 + lVar8) == *(long *)(lVar7 + lVar8);
          }
          uVar2 = System_UIntPtr__op_Inequality_4886170
                            (*(undefined8 *)(lVar3 + lVar4),*(undefined8 *)(lVar7 + lVar4),0);
          if ((uVar2 & 1) != 0) break;
          lVar4 = System_IntPtr__op_Addition_4878348(lVar4,8,0);
        }
        return false;
      }
      uVar2 = System_IntPtr__op_Explicit_487833c(uVar5,0);
      uVar6 = System_IntPtr__op_Explicit_487833c(lVar4,0);
      if (uVar6 < uVar2) {
        do {
          bVar1 = *(char *)(lVar3 + lVar4) == *(char *)(lVar7 + lVar4);
          if (!bVar1) {
            return bVar1;
          }
          lVar4 = System_IntPtr__op_Addition_4878348(lVar4,1,0);
          uVar2 = System_IntPtr__op_Explicit_487833c(uVar5,0);
          uVar6 = System_IntPtr__op_Explicit_487833c(lVar4,0);
        } while (uVar6 < uVar2);
        return bVar1;
      }
    }
    return true;
  }
  return false;
}


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinFinishGetPanel$$OnTap
void Dino_BusSand_App_UI_GoldenCoinFinishGetPanel__OnTap (Dino_BusSand_App_UI_GoldenCoinFinishGetPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinFinishGetPanel$$OnTap
   void Dino_BusSand_App_UI_GoldenCoinFinishGetPanel__OnTap
   (Dino_BusSand_App_UI_GoldenCoinFinishGetPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GoldenCoinFinishGetPanel__OnTap_21ae994
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9ba7e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caef98);
    FUN_02132f7c(PTR_DAT_04cadf68);
    bRam0000000004f9ba7e = 1;
  }
  puVar2 = PTR_DAT_04caef98;
  if (*(char *)(param_4 + 0x44) != '\0') {
    return;
  }
  *(undefined1 *)(param_4 + 0x44) = 1;
  uVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar5 & 1) == 0) {
    lVar6 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
  }
  else {
    lVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)puVar2,0);
  }
  if (lVar6 != 0) {
    uVar11 = UnityEngine_Transform__get_position_43d0e48(lVar6,0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_4,*(undefined8 *)PTR_DAT_04cadf68,0,0);
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
    if (lVar6 == 0) {
      iVar3 = 0;
    }
    else {
      if (*(long *)(param_4 + 0x38) == 0) goto LAB_022aec58;
      iVar3 = Dino_BusSand_App_Meta_GiftPackFeature__FinishGoldenSettlement_223d7a8
                        (lVar6,*(undefined4 *)(*(long *)(param_4 + 0x38) + 0x10),0);
    }
    if (*(long *)(param_4 + 0x38) != 0) {
      plVar7 = (long *)(*(long *)(param_4 + 0x38) + 0x18);
      lVar6 = *plVar7;
      *plVar7 = 0;
      thunk_FUN_02134474(plVar7,0);
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_4,0);
      if (iVar3 < 1) {
LAB_022aec2c:
        if (lVar6 == 0) {
          return;
        }
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        return;
      }
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
      System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
                (lVar8,*(undefined8 *)PTR_DAT_04caca50);
      uStack_50 = 0;
      uStack_48 = 0;
      System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                (&uStack_50,0x3e9,iVar3,*(undefined8 *)PTR_DAT_04cae910);
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar10 = *(long *)PTR_DAT_04cae058;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + 0x20) = uStack_50;
            *(undefined8 *)(lVar9 + 0x28) = uStack_48;
          }
          else {
            System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                      (lVar8,uStack_50,uStack_48,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_CommerceRewardFly__Fly_22a8d24(uVar11,param_2,param_3,lVar8,0,0,0);
          goto LAB_022aec2c;
        }
      }
    }
  }
LAB_022aec58:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<>c__DisplayClass17_0$$<ShowBuySuccess>b__0
void Dino_BusSand_App_UI_PassportUi___c__DisplayClass17_0___ShowBuySuccess_b__0 (Dino_BusSand_App_UI_PassportUi___c__DisplayClass17_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02349b20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<>c__DisplayClass17_0$$<ShowBuySuccess>b__0
   void Dino_BusSand_App_UI_PassportUi___c__DisplayClass17_0___ShowBuySuccess_b__0
   (Dino_BusSand_App_UI_PassportUi___c__DisplayClass17_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportUi___c__DisplayClass17_0___ShowBuySuccess_b__0_21dcd74
               (long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar5 = PTR_DAT_04cb01b0;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if ((bRam0000000004f9bf8d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb39b8,lVar8,1,0);
    FUN_02132f7c(PTR_DAT_04cb0388);
    FUN_02132f7c(PTR_DAT_04cb0390);
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf8d = 1;
  }
  lVar7 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(lVar6,*(undefined8 *)puVar5);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x62) != '\0') {
      if (lVar8 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x023499d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      return;
    }
    *(undefined1 *)(lVar7 + 100) = 1;
    Dino_BusSand_App_UI_PassportUi__OpenGet_21db2d4(lVar8,0);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0390);
    System_Collections_Generic_List_PassportFeature_Reward____ctor_3b57a78
              (lVar8,*(undefined8 *)PTR_DAT_04cb0388);
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar10 = *(long *)PTR_DAT_04cb39b8;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      uVar4 = _UNK_00e6b478;
      uVar3 = _UNK_00e6b470;
      uVar2 = _UNK_00e6a868;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + 0x20) = uVar2;
          *(undefined8 *)(lVar9 + 0x30) = uVar4;
          *(undefined8 *)(lVar9 + 0x28) = uVar3;
        }
        else {
          uStack_48 = _UNK_00e6a868;
          uStack_38 = _UNK_00e6b478;
          uStack_40 = _UNK_00e6b470;
          System_Collections_Generic_List_PassportFeature_Reward___AddWithResize_3b58380
                    (lVar8,&uStack_48,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        Dino_BusSand_App_Meta_PassportFeature__TrackReward_2247b68(lVar6,1,0,0,lVar8);
        Dino_BusSand_App_Meta_PassportFeature__ActivePrivilege_2245b54(lVar6);
        puVar5 = PTR_DAT_04cb0558;
        *(undefined1 *)(lVar7 + 0x62) = 1;
        Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(lVar6,*(undefined8 *)puVar5);
        puVar5 = PTR_DAT_04caef48;
        lVar6 = *(long *)PTR_DAT_04caef48;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar5;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 == 0) {
          return;
        }
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


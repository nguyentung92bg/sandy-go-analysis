/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnGivePurchaseReward
void Dino_BusSand_App_Meta_PassportFeature__OnGivePurchaseReward (Dino_BusSand_App_Meta_PassportFeature_o* __this, System_Action_o* onClose, bool showGet, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnGivePurchaseReward
   void Dino_BusSand_App_Meta_PassportFeature__OnGivePurchaseReward
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, System_Action_o* onClose, bool showGet, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__OnGivePurchaseReward_2249918
               (undefined8 param_1,long param_2,ulong param_3)

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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar5 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf8d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb39b8);
    FUN_02132f7c(PTR_DAT_04cb0388);
    FUN_02132f7c(PTR_DAT_04cb0390);
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf8d = 1;
  }
  lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar5)
  ;
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x62) != '\0') {
      if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x023499d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2 + 0x18))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28))
      ;
      return;
    }
    *(undefined1 *)(lVar6 + 100) = 1;
    if ((param_3 & 1) != 0) {
      Dino_BusSand_App_UI_PassportUi__OpenGet_21db2d4(param_2,0);
      param_2 = 0;
    }
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0390);
    System_Collections_Generic_List_PassportFeature_Reward____ctor_3b57a78
              (lVar7,*(undefined8 *)PTR_DAT_04cb0388);
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar9 = *(long *)PTR_DAT_04cb39b8;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      uVar4 = _UNK_00e6b478;
      uVar3 = _UNK_00e6b470;
      uVar2 = _UNK_00e6a868;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          lVar8 = lVar8 + (long)(int)uVar1 * 0x18;
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + 0x20) = uVar2;
          *(undefined8 *)(lVar8 + 0x30) = uVar4;
          *(undefined8 *)(lVar8 + 0x28) = uVar3;
        }
        else {
          uStack_48 = _UNK_00e6a868;
          uStack_38 = _UNK_00e6b478;
          uStack_40 = _UNK_00e6b470;
          System_Collections_Generic_List_PassportFeature_Reward___AddWithResize_3b58380
                    (lVar7,&uStack_48,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        Dino_BusSand_App_Meta_PassportFeature__TrackReward_2247b68(param_1,1,0,0,lVar7);
        Dino_BusSand_App_Meta_PassportFeature__ActivePrivilege_2245b54(param_1);
        puVar5 = PTR_DAT_04cb0558;
        *(undefined1 *)(lVar6 + 0x62) = 1;
        Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar5);
        puVar5 = PTR_DAT_04caef48;
        lVar6 = *(long *)PTR_DAT_04caef48;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar5;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        }
        if (param_2 == 0) {
          return;
        }
        (**(code **)(param_2 + 0x18))
                  (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


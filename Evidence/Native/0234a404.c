/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnStorePurchaseCompleted
void Dino_BusSand_App_Meta_PassportFeature__OnStorePurchaseCompleted (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnStorePurchaseCompleted
   void Dino_BusSand_App_Meta_PassportFeature__OnStorePurchaseCompleted
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t storeItemId, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_PassportFeature__OnStorePurchaseCompleted_224a404
               (undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((bRam0000000004f9bf8b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf8b = 1;
  }
  uVar6 = Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58(param_1);
  if ((uVar6 & 1) != 0) {
                    /* try { // try from 0234a450 to 0244a453 has its CatchHandler @ 0234a910 */
    lVar7 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
                    /* try { // try from 0234a454 to 0244a45b has its CatchHandler @ 0234a90c */
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 0234a464 to 0244a46b has its CatchHandler @ 0234a8fc */
    if (((0 < *(int *)(lVar7 + 0x44)) &&
        (iVar5 = Dino_BusSand_App_Meta_PassportFeature__CurrentStoreItemId_22467e8(param_1),
        puVar4 = PTR_DAT_04cb01b0, 0 < iVar5)) && (iVar5 == param_2)) {
      if ((bRam0000000004f9bf8c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caba50);
        FUN_02132f7c(PTR_DAT_04caa160);
        FUN_02132f7c(PTR_DAT_04cad860);
        FUN_02132f7c(PTR_DAT_04cb0558);
        FUN_02132f7c(PTR_DAT_04cb01b0);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04caef48);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        FUN_02132f7c(PTR_DAT_04cb25f0);
        bRam0000000004f9bf8c = 1;
      }
      lVar7 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar4);
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + 0x1c) = 1;
        *(undefined1 *)(lVar7 + 0x61) = 1;
        if (*(long *)(lVar7 + 0x38) != 0) {
          uVar6 = System_Collections_Generic_List_int___Contains_3a2c3ec
                            (*(long *)(lVar7 + 0x38),0,*(undefined8 *)PTR_DAT_04cad860);
          if ((uVar6 & 1) == 0) {
            lVar7 = *(long *)(lVar7 + 0x38);
            if (lVar7 == 0) goto LAB_0234a760;
            lVar8 = *(long *)(lVar7 + 0x10);
            lVar9 = *(long *)PTR_DAT_04caa160;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_0234a760;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar7,0,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
          puVar4 = PTR_DAT_04caef48;
          Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                    (param_1,*(undefined8 *)PTR_DAT_04cb0558);
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar4;
          }
          puVar3 = PTR_DAT_04caba50;
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
            ;
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
            cRam0000000004f9b88f = '\x01';
          }
          puVar2 = PTR_DAT_04ca9ae8;
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar3;
          }
          lVar8 = *(long *)puVar2;
          lVar7 = **(long **)(lVar7 + 0xb8);
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar8);
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
          if ((uVar6 & 1) != 0) {
            if (lVar7 == 0) goto LAB_0234a760;
            if (*(char *)(lVar7 + 0x38) != '\0') {
              uVar10 = *(undefined8 *)(lVar7 + 0x20);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(lVar7 + 0x20) == 0) goto LAB_0234a760;
                if (*(int *)(*(long *)(lVar7 + 0x20) + 0x20) == 3) {
                  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_App_Meta_Profile__Add_2272578
                            (0x2715,1,*(undefined8 *)PTR_DAT_04cb25f0,0);
                  lVar7 = *(long *)puVar4;
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar7 = *(long *)puVar4;
                  }
                  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0234a750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(lVar7 + 0x18))
                              (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
                    return;
                  }
                }
              }
            }
          }
          return;
        }
      }
LAB_0234a760:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* try { // try from 0234a490 to 0244a4cb has its CatchHandler @ 0234a91c */
  return;
}


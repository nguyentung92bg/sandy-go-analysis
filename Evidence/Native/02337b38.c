/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnIapPurchased
void Dino_BusSand_App_Meta_GiftPackFeature__OnIapPurchased (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnIapPurchased
   void Dino_BusSand_App_Meta_GiftPackFeature__OnIapPurchased (int32_t storeItemId, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__OnIapPurchased_2237b38(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar4 = PTR_DAT_04caec48;
                    /* try { // try from 02337b3c to 02437b3f has its CatchHandler @ 02337b80 */
                    /* try { // try from 02337b40 to 02437b4b has its CatchHandler @ 02337b7c */
  if ((bRam0000000004f9beb2 & 1) == 0) {
                    /* try { // try from 02337b5c to 02437b67 has its CatchHandler @ 02337b78 */
    FUN_02132f7c(PTR_DAT_04caec48);
                    /* try { // try from 02337b68 to 02437b97 has its CatchHandler @ 02337b24 */
    FUN_02132f7c(PTR_DAT_04cac668);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337b5c with catch @ 02337b78
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337b40 with catch @ 02337b7c
                        */
    FUN_02132f7c(PTR_DAT_04caef48);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337b3c with catch @ 02337b80
                        */
    bRam0000000004f9beb2 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02337b98 to 02437baf has its CatchHandler @ 02337bec */
  puVar3 = PTR_DAT_04caef48;
  puVar4 = PTR_DAT_04cac668;
  lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44();
  if (lVar6 != 0) {
                    /* try { // try from 02337bb0 to 02437bdb has its CatchHandler @ 02337b24 */
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar4;
    }
    if (*(char *)(*(long *)(lVar7 + 0xb8) + 8) != '\0') {
                    /* try { // try from 02337bdc to 02437beb has its CatchHandler @ 02337bec */
      Dino_BusSand_App_Meta_GiftPackFeature__OnStorePurchaseCompleted_2237c4c(lVar6,param_1);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02337b98 with catch @ 02337bec
                       catch() { ... } // from try @ 02337bdc with catch @ 02337bec */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02337bf0 to 02437bf3 has its CatchHandler @ 02337bfc */
                    /* try { // try from 02337bf4 to 02437bff has its CatchHandler @ 02337b24 */
  lVar6 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
  if (lVar6 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02337bf0 with catch @ 02337bfc
                        */
                    /* try { // try from 02337c00 to 02437c17 has its CatchHandler @ 02337c00
                       catch() { ... } // from try @ 02337c00 with catch @ 02337c00
                       catch() { ... } // from try @ 02337c44 with catch @ 02337c00
                       catch() { ... } // from try @ 02337c8c with catch @ 02337c00
                       catch() { ... } // from try @ 02337cd0 with catch @ 02337c00 */
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar4;
    }
                    /* try { // try from 02337c18 to 02437c1b has its CatchHandler @ 02337c5c */
                    /* try { // try from 02337c1c to 02437c27 has its CatchHandler @ 02337c58 */
    if (*(char *)(*(long *)(lVar7 + 0xb8) + 8) != '\0') {
      if ((bRam0000000004f9bf8b & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb01b0,param_1,0);
        bRam0000000004f9bf8b = 1;
      }
      uVar8 = Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58(lVar6);
      if ((uVar8 & 1) != 0) {
        lVar7 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (lVar6,*(undefined8 *)PTR_DAT_04cb01b0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (((0 < *(int *)(lVar7 + 0x44)) &&
            (iVar5 = Dino_BusSand_App_Meta_PassportFeature__CurrentStoreItemId_22467e8(lVar6),
            puVar4 = PTR_DAT_04cb01b0, 0 < iVar5)) && (iVar5 == param_1)) {
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
                            (lVar6,*(undefined8 *)puVar4);
          if (lVar7 != 0) {
            *(undefined1 *)(lVar7 + 0x1c) = 1;
            *(undefined1 *)(lVar7 + 0x61) = 1;
            if (*(long *)(lVar7 + 0x38) != 0) {
              uVar8 = System_Collections_Generic_List_int___Contains_3a2c3ec
                                (*(long *)(lVar7 + 0x38),0,*(undefined8 *)PTR_DAT_04cad860);
              if ((uVar8 & 1) == 0) {
                lVar7 = *(long *)(lVar7 + 0x38);
                if (lVar7 == 0) goto LAB_0234a760;
                lVar9 = *(long *)(lVar7 + 0x10);
                lVar10 = *(long *)PTR_DAT_04caa160;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_0234a760;
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize_3a2c06c
                            (lVar7,0,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
              puVar4 = PTR_DAT_04caef48;
              Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                        (lVar6,*(undefined8 *)PTR_DAT_04cb0558);
              lVar6 = *(long *)puVar4;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar6 = *(long *)puVar4;
              }
              puVar3 = PTR_DAT_04caba50;
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
              if (lVar6 != 0) {
                (**(code **)(lVar6 + 0x18))
                          (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b88f == '\0') {
                FUN_02132f7c(PTR_DAT_04caba50);
                cRam0000000004f9b88f = '\x01';
              }
              puVar2 = PTR_DAT_04ca9ae8;
              lVar6 = *(long *)puVar3;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar6 = *(long *)puVar3;
              }
              lVar7 = *(long *)puVar2;
              lVar6 = **(long **)(lVar6 + 0xb8);
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar7);
              }
              uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
              if ((uVar8 & 1) != 0) {
                if (lVar6 == 0) goto LAB_0234a760;
                if (*(char *)(lVar6 + 0x38) != '\0') {
                  uVar11 = *(undefined8 *)(lVar6 + 0x20);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
                  if ((uVar8 & 1) != 0) {
                    if (*(long *)(lVar6 + 0x20) == 0) goto LAB_0234a760;
                    if (*(int *)(*(long *)(lVar6 + 0x20) + 0x20) == 3) {
                      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_App_Meta_Profile__Add_2272578
                                (0x2715,1,*(undefined8 *)PTR_DAT_04cb25f0,0);
                      lVar6 = *(long *)puVar4;
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar6 = *(long *)puVar4;
                      }
                      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                      if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0234a750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (**(code **)(lVar6 + 0x18))
                                  (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
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
      return;
    }
  }
                    /* try { // try from 02337c44 to 02437c73 has its CatchHandler @ 02337c00 */
  return;
}


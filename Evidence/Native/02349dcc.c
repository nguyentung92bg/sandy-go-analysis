/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnBoot
void Dino_BusSand_App_Meta_PassportFeature__OnBoot (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnBoot
   void Dino_BusSand_App_Meta_PassportFeature__OnBoot (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__OnBoot_2249dcc(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
                    /* try { // try from 02349ddc to 02449ddf has its CatchHandler @ 02349de8 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02349dc0 with catch @ 02349de0
                       try { // try from 02349de0 to 02449e03 has its CatchHandler @ 02349cb0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02349dac with catch @ 02349de4
                        */
  if ((bRam0000000004f9bf87 & 1) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02349ddc with catch @ 02349de8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02349d84 with catch @ 02349dec
                        */
    FUN_02132f7c(PTR_DAT_04cacd48);
    FUN_02132f7c(PTR_DAT_04cad6e8);
                    /* try { // try from 02349e04 to 02449e1b has its CatchHandler @ 02349e80 */
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cb0558);
                    /* try { // try from 02349e1c to 02449e6b has its CatchHandler @ 02349cb0 */
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04cac690);
    bRam0000000004f9bf87 = 1;
  }
  puVar3 = PTR_DAT_04cb01b0;
  lVar10 = param_1[4];
  if (lVar10 != 0) {
    iVar1 = *(int *)(lVar10 + 0x18);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
    }
                    /* try { // try from 02349e6c to 02449e7b has its CatchHandler @ 02349e80 */
    uVar9 = *(undefined8 *)puVar3;
    *(undefined4 *)(param_1 + 3) = 0;
    lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar9);
                    /* try { // try from 02349e7c to 02449e83 has its CatchHandler @ 02349cb0 */
    if (lVar10 != 0) {
                    /* catch() { ... } // from try @ 02349e04 with catch @ 02349e80
                       catch() { ... } // from try @ 02349e6c with catch @ 02349e80 */
                    /* try { // try from 02349e84 to 02449e87 has its CatchHandler @ 02349e90 */
      if (*(long *)(lVar10 + 0x30) == 0) {
                    /* try { // try from 02349e88 to 02449e93 has its CatchHandler @ 02349cb0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02349e84 with catch @ 02349e90
                        */
        lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                           (param_1,*(undefined8 *)puVar3);
        uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
        System_Collections_Generic_List_int____ctor_3a2b7dc(uVar9,*(undefined8 *)PTR_DAT_04cad6e8);
        if (lVar10 == 0) goto LAB_0234a0b8;
        *(undefined8 *)(lVar10 + 0x30) = uVar9;
        thunk_FUN_02134474((undefined8 *)(lVar10 + 0x30),uVar9);
      }
      lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                         (param_1,*(undefined8 *)puVar3);
      if (lVar10 != 0) {
        if (*(long *)(lVar10 + 0x38) == 0) {
          lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                             (param_1,*(undefined8 *)puVar3);
          uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
          System_Collections_Generic_List_int____ctor_3a2b7dc(uVar9,*(undefined8 *)PTR_DAT_04cad6e8)
          ;
          if (lVar10 == 0) goto LAB_0234a0b8;
          *(undefined8 *)(lVar10 + 0x38) = uVar9;
          thunk_FUN_02134474((undefined8 *)(lVar10 + 0x38),uVar9);
        }
        lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                           (param_1,*(undefined8 *)puVar3);
        if (lVar10 != 0) {
          if (*(long *)(lVar10 + 0x80) == 0) {
            lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                               (param_1,*(undefined8 *)puVar3);
            uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
            System_Collections_Generic_List_int____ctor_3a2b7dc
                      (uVar9,*(undefined8 *)PTR_DAT_04cad6e8);
            if (lVar10 == 0) goto LAB_0234a0b8;
            *(undefined8 *)(lVar10 + 0x80) = uVar9;
            thunk_FUN_02134474((undefined8 *)(lVar10 + 0x80),uVar9);
          }
          lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                             (param_1,*(undefined8 *)puVar3);
          if (lVar10 != 0) {
            *(undefined1 *)(lVar10 + 0x70) = 1;
            Dino_BusSand_App_Meta_PassportFeature__TryInitPassportCycleSnapshot_22494ac(param_1);
            lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                               (param_1,*(undefined8 *)puVar3);
            if (lVar10 != 0) {
              if (*(int *)(lVar10 + 0x14) == 1) {
                lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                   (param_1,*(undefined8 *)puVar3);
                if (lVar10 == 0) goto LAB_0234a0b8;
                if (*(int *)(lVar10 + 0x18) < 1) {
                  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                     (param_1,*(undefined8 *)puVar3);
                  uVar5 = Dino_BusSand_App_Meta_PassportFeature__get_EffectiveConfigId_2244894
                                    (param_1);
                  if (lVar10 == 0) goto LAB_0234a0b8;
                  *(undefined4 *)(lVar10 + 0x18) = uVar5;
                }
              }
              lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                 (param_1,*(undefined8 *)puVar3);
              if (lVar10 != 0) {
                if (*(char *)(lVar10 + 0x28) != '\0') {
                  Dino_BusSand_App_Meta_PassportFeature__CommitPendingKeys_224785c(param_1);
                  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                     (param_1,*(undefined8 *)puVar3);
                  if (lVar10 == 0) goto LAB_0234a0b8;
                  *(undefined1 *)(lVar10 + 0x28) = 0;
                }
                Dino_BusSand_App_Meta_PassportFeature__ExecuteCommand_2249d0c(param_1);
                uVar6 = Dino_BusSand_App_Meta_PassportFeature__get_IsPurchased_22463a8(param_1);
                if ((uVar6 & 1) != 0) {
                  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                     (param_1,*(undefined8 *)puVar3);
                  if (lVar10 == 0) goto LAB_0234a0b8;
                  if (*(char *)(lVar10 + 99) == '\0') {
                    Dino_BusSand_App_Meta_PassportFeature__AddHallCmd_224a0bc
                              (param_1,*(undefined8 *)PTR_DAT_04cac690);
                  }
                }
                puVar3 = PTR_DAT_04cb0558;
                Dino_BusSand_App_Meta_PassportFeature__AutoOpenOrClosePassport_224a1a0(param_1,0,1);
                lVar10 = *(long *)puVar3;
                if ((bRam0000000004f9d943 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cac668);
                  bRam0000000004f9d943 = 1;
                }
                puVar3 = PTR_DAT_04cac668;
                if (param_1[2] == 0) {
                  return;
                }
                uVar9 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
                lVar13 = param_1[2];
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar3);
                }
                puVar3 = PTR_DAT_04cabaf8;
                if ((bRam0000000004f9d81f & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cc4908,lVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x20));
                  FUN_02132f7c(PTR_DAT_04cc4910);
                  FUN_02132f7c(PTR_DAT_04cc4918);
                  FUN_02132f7c(PTR_DAT_04cc4930);
                  FUN_02132f7c(PTR_DAT_04cc4920);
                  FUN_02132f7c(PTR_DAT_04cb4790);
                  FUN_02132f7c(PTR_DAT_04cb4798);
                  FUN_02132f7c(PTR_DAT_04cabaf8);
                  FUN_02132f7c(PTR_DAT_04cc4938);
                  bRam0000000004f9d81f = 1;
                }
                uStack_60 = 0;
                puStack_58 = (undefined8 *)0x0;
                lStack_50 = 0;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                if (cRam0000000004f9b894 == '\0') {
                  FUN_02132f7c(PTR_DAT_04cabaf8);
                  cRam0000000004f9b894 = '\x01';
                }
                lVar10 = *(long *)puVar3;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar10 = *(long *)puVar3;
                }
                lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
                if (lVar10 != 0) {
                  if (*(long *)(lVar10 + 0x130) == 0) {
                    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
                    System_Collections_Generic_List_object____ctor_3a8138c
                              (uVar7,*(undefined8 *)PTR_DAT_04cb4790);
                    *(undefined8 *)(lVar10 + 0x130) = uVar7;
                    thunk_FUN_02134474(lVar10 + 0x130,uVar7);
                  }
                  uVar7 = UnityEngine_JsonUtility__ToJson_44323ac(lVar13,0);
                  puVar4 = PTR_DAT_04cc4910;
                  if (*(long *)(lVar10 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  System_Collections_Generic_List_object___GetEnumerator_3a825f0
                            (&uStack_78,*(long *)(lVar10 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
                  lStack_50 = lStack_68;
                  puStack_58 = puStack_70;
                  uStack_60 = uStack_78;
                  uStack_78 = 0;
                  puStack_70 = &uStack_60;
                  do {
                    uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                      (&uStack_60,*(undefined8 *)puVar4);
                    lVar13 = lStack_50;
                    if ((uVar6 & 1) == 0) {
                      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                                (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
                      lVar13 = *(long *)(lVar10 + 0x130);
                      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
                      Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar10,0);
                      if (lVar10 != 0) {
                        *(undefined8 *)(lVar10 + 0x10) = uVar9;
                        thunk_FUN_02134474((undefined8 *)(lVar10 + 0x10),uVar9);
                        *(undefined8 *)(lVar10 + 0x18) = uVar7;
                        thunk_FUN_02134474((undefined8 *)(lVar10 + 0x18),uVar7);
                        if (lVar13 != 0) {
                          lVar11 = *(long *)(lVar13 + 0x10);
                          lVar12 = *(long *)PTR_DAT_04cc4930;
                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                          if (lVar11 != 0) {
                            uVar2 = *(uint *)(lVar13 + 0x18);
                            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                              *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                              plVar8 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                              *plVar8 = lVar10;
                              thunk_FUN_02134474(plVar8,lVar10);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                        (lVar13,lVar10,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                            }
                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
                            return;
                          }
                        }
                      }
                      goto LAB_028ef87c;
                    }
                    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    uVar6 = System_String__op_Equality_46d1108
                                      (*(undefined8 *)(lStack_50 + 0x10),uVar9,0);
                  } while ((uVar6 & 1) == 0);
                  *(undefined8 *)(lVar13 + 0x18) = uVar7;
                  thunk_FUN_02134474((undefined8 *)(lVar13 + 0x18),uVar7);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
                  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                            (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0234a0b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


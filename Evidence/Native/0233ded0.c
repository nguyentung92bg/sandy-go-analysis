/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature.<>c$$<.ctor>b__30_0
void Dino_BusSand_App_Meta_GiftPackFeature___c____ctor_b__30_0 (Dino_BusSand_App_Meta_GiftPackFeature___c_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature.<>c$$<.ctor>b__30_0
   void Dino_BusSand_App_Meta_GiftPackFeature___c____ctor_b__30_0
   (Dino_BusSand_App_Meta_GiftPackFeature___c_o* __this, int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature___c____ctor_b__30_0_223ded0
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long alStack_58 [2];
  
  puVar1 = PTR_DAT_04caec48;
  if ((bRam0000000004f9bee4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9bee4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44();
  puVar1 = PTR_DAT_04cabaf8;
  if (lVar9 == 0) {
    return;
  }
  if ((bRam0000000004f9beb1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2da0);
    FUN_02132f7c(PTR_DAT_04cb2d98);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb34d0);
    FUN_02132f7c(PTR_DAT_04cb34d8);
    FUN_02132f7c(PTR_DAT_04cb34e0);
    FUN_02132f7c(PTR_DAT_04cb34e8);
    FUN_02132f7c(PTR_DAT_04caefe8);
    FUN_02132f7c(PTR_DAT_04cb3390);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9beb1 = 1;
  }
  alStack_58[0] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  if (param_2 == 0x3ea) {
    return;
  }
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) == 0) {
    return;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_2,0);
  if (*(long *)(lVar9 + 0x30) != 0) {
    bVar4 = System_Collections_Generic_Dictionary_int__long___TryGetValue_34356a4
                      (*(long *)(lVar9 + 0x30),param_2,alStack_58,*(undefined8 *)PTR_DAT_04cb2da0);
    if (*(long *)(lVar9 + 0x30) != 0) {
      System_Collections_Generic_Dictionary_int__long___set_Item_3433c2c
                (*(long *)(lVar9 + 0x30),param_2,lVar5,*(undefined8 *)PTR_DAT_04cb2d98);
      puVar1 = PTR_DAT_04cac668;
      if ((bVar4 & lVar5 < alStack_58[0]) == 1) {
        lVar6 = *(long *)PTR_DAT_04cac668;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar6 + 0xb8) + 8) != '\0') {
          Dino_BusSand_App_Meta_GiftPackFeature__EnsureInit_2235d04(lVar9);
          lVar6 = alStack_58[0];
          if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
          puVar1 = PTR_DAT_04cb3390;
          lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                            (lVar9,*(undefined8 *)PTR_DAT_04cb3390);
          puVar2 = PTR_DAT_04cb34d0;
          if (lVar8 != 0) {
            lVar10 = *(long *)(lVar8 + 0x60);
            lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb34d0);
            System_Object___ctor_4870e5c(lVar8,0);
            if (lVar8 != 0) {
              *(int *)(lVar8 + 0x18) = param_2;
              *(double *)(lVar8 + 0x20) = (double)(lVar6 - lVar5);
              *(long *)(lVar8 + 0x10) = lVar7 / 1000;
              puVar3 = PTR_DAT_04cb34d8;
              if (lVar10 != 0) {
                FUN_01e77d34(lVar10,lVar8,*(undefined8 *)PTR_DAT_04cb34d8);
                lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                  (lVar9,*(undefined8 *)puVar1);
                if ((lVar8 != 0) && (*(long *)(lVar8 + 0x60) != 0)) {
                  if (200 < *(int *)(*(long *)(lVar8 + 0x60) + 0x18)) {
                    lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                      (lVar9,*(undefined8 *)puVar1);
                    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x60) == 0)) goto LAB_02337b34;
                    System_Collections_Generic_List_object___RemoveAt_3a833a0
                              (*(long *)(lVar8 + 0x60),0,*(undefined8 *)PTR_DAT_04cb34e0);
                  }
                  if (param_2 != 0x3e9) {
LAB_02337afc:
                    Dino_BusSand_App_Meta_GiftPackFeature__EvaluateAllPacks_22368ec(lVar9);
                    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                              (lVar9,*(undefined8 *)PTR_DAT_04caefe8);
                    return;
                  }
                  lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                    (lVar9,*(undefined8 *)puVar1);
                  if (lVar8 != 0) {
                    lVar10 = *(long *)(lVar8 + 0x58);
                    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    System_Object___ctor_4870e5c(lVar8,0);
                    if (lVar8 != 0) {
                      *(long *)(lVar8 + 0x10) = lVar7 / 1000;
                      *(undefined4 *)(lVar8 + 0x18) = 0x3e9;
                      *(double *)(lVar8 + 0x20) = (double)(lVar6 - lVar5);
                      if (lVar10 != 0) {
                        FUN_01e77d34(lVar10,lVar8,*(undefined8 *)puVar3);
                        goto LAB_02337afc;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_02337b34;
        }
      }
      return;
    }
  }
LAB_02337b34:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


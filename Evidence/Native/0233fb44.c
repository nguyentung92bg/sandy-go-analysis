/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$IapAction
void Dino_BusSand_App_Meta_GiftPackTrack__IapAction (System_String_o* scene, int32_t storeItemId, System_String_o* label, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$IapAction
   void Dino_BusSand_App_Meta_GiftPackTrack__IapAction (System_String_o* scene, int32_t storeItemId,
   System_String_o* label, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackTrack__IapAction_223fb44(long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_04caecc0;
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9bef1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cad1f8);
    FUN_02132f7c(PTR_DAT_04cac728);
    FUN_02132f7c(PTR_DAT_04cadcf0);
    FUN_02132f7c(PTR_DAT_04cb3778);
    FUN_02132f7c(PTR_DAT_04cb3750);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb3760);
    FUN_02132f7c(PTR_DAT_04caecc0);
    bRam0000000004f9bef1 = 1;
  }
  uVar3 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar2,0);
  if ((param_2 < 1) || ((uVar3 & 1) != 0)) {
    plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar1,8);
    puVar1 = PTR_DAT_04cac728;
    if (plVar4 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04cac728 == 0) ||
         (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac728,*(undefined8 *)(*plVar4 + 0x40)),
         lVar5 != 0)) {
        if ((int)plVar4[3] != 0) {
          plVar4[4] = *(long *)puVar1;
          thunk_FUN_02134474();
          if ((param_1 != 0) &&
             (lVar5 = thunk_FUN_0216e7a0(param_1,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_02340144;
          if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
            plVar4[5] = param_1;
            thunk_FUN_02134474(plVar4 + 5,param_1);
            puVar1 = PTR_DAT_04cb3750;
            if ((*(long *)PTR_DAT_04cb3750 != 0) &&
               (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb3750,*(undefined8 *)(*plVar4 + 0x40)
                                          ), lVar5 == 0)) goto LAB_02340144;
            if (2 < *(uint *)(plVar4 + 3)) {
              plVar4[6] = *(long *)puVar1;
              thunk_FUN_02134474();
              puVar1 = PTR_DAT_04ca9c30;
              if ((*(long *)PTR_DAT_04ca9c30 != 0) &&
                 (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04ca9c30,
                                             *(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
              goto LAB_02340144;
              if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
                plVar4[7] = *(long *)puVar1;
                thunk_FUN_02134474();
                puVar2 = PTR_DAT_04cb3760;
                if ((*(long *)PTR_DAT_04cb3760 != 0) &&
                   (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb3760,
                                               *(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                goto LAB_02340144;
                if (4 < *(uint *)(plVar4 + 3)) {
                  plVar4[8] = *(long *)puVar2;
                  thunk_FUN_02134474();
                  if ((*(long *)puVar1 != 0) &&
                     (lVar5 = thunk_FUN_0216e7a0(*(long *)puVar1,*(undefined8 *)(*plVar4 + 0x40)),
                     lVar5 == 0)) goto LAB_02340144;
                  if (5 < *(uint *)(plVar4 + 3)) {
                    plVar4[9] = *(long *)puVar1;
                    thunk_FUN_02134474();
                    puVar1 = PTR_DAT_04cad1f8;
                    if ((*(long *)PTR_DAT_04cad1f8 != 0) &&
                       (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad1f8,
                                                   *(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                    goto LAB_02340144;
                    if (6 < *(uint *)(plVar4 + 3)) {
                      plVar4[10] = *(long *)puVar1;
                      thunk_FUN_02134474();
                      uStack_34 = 0;
                      lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
                      if ((lVar5 != 0) &&
                         (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar6 == 0)) goto LAB_02340144;
                      if ((*(uint *)(plVar4 + 3) & 0xfffffff8) != 0) {
                        plVar4[0xb] = lVar5;
                        thunk_FUN_02134474(plVar4 + 0xb,lVar5);
                        if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        uVar7 = *(undefined8 *)PTR_DAT_04cb3778;
LAB_02340120:
                        Dino_BusSand_App_Analytics__Log_216d0c8(uVar7,plVar4,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_02340140;
      }
      goto LAB_02340144;
    }
  }
  else {
    plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar1,10);
    puVar1 = PTR_DAT_04cac728;
    if (plVar4 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04cac728 != 0) &&
         (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac728,*(undefined8 *)(*plVar4 + 0x40)),
         lVar5 == 0)) {
LAB_02340144:
        uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar7,0);
      }
      if ((int)plVar4[3] != 0) {
        plVar4[4] = *(long *)puVar1;
        thunk_FUN_02134474();
        if ((param_1 != 0) &&
           (lVar5 = thunk_FUN_0216e7a0(param_1,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_02340144;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
          plVar4[5] = param_1;
          thunk_FUN_02134474(plVar4 + 5,param_1);
          puVar1 = PTR_DAT_04cb3750;
          if ((*(long *)PTR_DAT_04cb3750 != 0) &&
             (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb3750,*(undefined8 *)(*plVar4 + 0x40)),
             lVar5 == 0)) goto LAB_02340144;
          if (2 < *(uint *)(plVar4 + 3)) {
            plVar4[6] = *(long *)puVar1;
            thunk_FUN_02134474();
            lVar5 = Dino_BusSand_App_Meta_GiftPackTrack__Sku_223e688(param_2);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto LAB_02340144;
            if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
              plVar4[7] = lVar5;
              thunk_FUN_02134474(plVar4 + 7,lVar5);
              puVar1 = PTR_DAT_04cb3760;
              if ((*(long *)PTR_DAT_04cb3760 != 0) &&
                 (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb3760,
                                             *(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
              goto LAB_02340144;
              if (4 < *(uint *)(plVar4 + 3)) {
                plVar4[8] = *(long *)puVar1;
                thunk_FUN_02134474();
                lVar5 = Dino_BusSand_App_Meta_GiftPackTrack__SkuTypeOf_223e700(param_2);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                goto LAB_02340144;
                if (5 < *(uint *)(plVar4 + 3)) {
                  plVar4[9] = lVar5;
                  thunk_FUN_02134474(plVar4 + 9,lVar5);
                  puVar1 = PTR_DAT_04cadcf0;
                  if ((*(long *)PTR_DAT_04cadcf0 != 0) &&
                     (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cadcf0,
                                                 *(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                  goto LAB_02340144;
                  if (6 < *(uint *)(plVar4 + 3)) {
                    plVar4[10] = *(long *)puVar1;
                    thunk_FUN_02134474();
                    uVar7 = *(undefined8 *)PTR_DAT_04cb3778;
                    if (((param_3 != 0) || (param_3 = *(long *)PTR_DAT_04ca9c30, param_3 != 0)) &&
                       (lVar5 = thunk_FUN_0216e7a0(param_3,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar5 == 0)) goto LAB_02340144;
                    if ((*(uint *)(plVar4 + 3) & 0xfffffff8) != 0) {
                      plVar4[0xb] = param_3;
                      thunk_FUN_02134474(plVar4 + 0xb,param_3);
                      puVar1 = PTR_DAT_04cad1f8;
                      if ((*(long *)PTR_DAT_04cad1f8 != 0) &&
                         (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad1f8,
                                                     *(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                      goto LAB_02340144;
                      if (8 < *(uint *)(plVar4 + 3)) {
                        plVar4[0xc] = *(long *)puVar1;
                        thunk_FUN_02134474();
                        if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        uStack_48 = Dino_BusSand_App_Iap__PriceUsd_217a220(param_2,0);
                        lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&uStack_48);
                        if ((lVar5 != 0) &&
                           (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                           lVar6 == 0)) goto LAB_02340144;
                        if (9 < *(uint *)(plVar4 + 3)) {
                          plVar4[0xd] = lVar5;
                          thunk_FUN_02134474(plVar4 + 0xd,lVar5);
                          if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          goto LAB_02340120;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_02340140:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


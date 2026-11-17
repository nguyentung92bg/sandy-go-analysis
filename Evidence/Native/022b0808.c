/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnClose
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnClose (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnClose
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnClose
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnClose_21b0808(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  uint uStack_9c;
  double dStack_98;
  
  puVar6 = PTR_DAT_04caefd0;
  puVar1 = PTR_DAT_04caec48;
  puVar4 = PTR_DAT_04cac7e0;
  if ((bRam0000000004f9ba81 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caefc0);
    FUN_02132f7c(PTR_DAT_04caefd0);
    bRam0000000004f9ba81 = 1;
  }
  puVar5 = PTR_DAT_04caefc0;
  puVar3 = PTR_DAT_04cac498;
  puVar2 = PTR_DAT_04caa458;
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action_int____ctor_35ef18c(uVar7,param_1,*(undefined8 *)puVar6,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GiftPackFeature__remove_PackInvalidated_2233e64(uVar7,0);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action___ctor_47b5ed0(uVar7,param_1,*(undefined8 *)puVar5,0);
  Dino_BusSand_App_Meta_GiftPackFeature__remove_Changed_2233c94(uVar7,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd65 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498,0);
    bRam0000000004f9bd65 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd66 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb2698);
    FUN_02132f7c(PTR_DAT_04cb2630);
    FUN_02132f7c(PTR_DAT_04cb2638);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb2678);
    FUN_02132f7c(PTR_DAT_04cb2680);
    FUN_02132f7c(PTR_DAT_04cb26a0);
    FUN_02132f7c(PTR_DAT_04cb2690);
    FUN_02132f7c(PTR_DAT_04cb26a8);
    FUN_02132f7c(PTR_DAT_04caa870);
    bRam0000000004f9bd66 = 1;
  }
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar4;
  }
  puVar2 = PTR_DAT_04cb2698;
  puVar6 = PTR_DAT_04cb2638;
  puVar1 = PTR_DAT_04caa200;
  lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x68);
  if (lVar9 == 0) {
LAB_023180ec:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar10 = *(int *)(lVar9 + 0x18);
  if (-1 < iVar10 + -1) {
    do {
      lVar8 = *(long *)puVar4;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar4;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x68);
      if (lVar8 == 0) goto LAB_023180ec;
      iVar10 = iVar10 + -1;
      lVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar8,iVar10,*(undefined8 *)puVar6);
      if (lVar8 == 0) goto LAB_023180ec;
      if (*(long *)(lVar8 + 0x38) == param_1) {
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar9 = *(long *)puVar4;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x68);
        if (lVar9 == 0) goto LAB_023180ec;
        System_Collections_Generic_List_object___RemoveAt_3a833a0
                  (lVar9,iVar10,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)PTR_DAT_04cb2240 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar9 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
        if ((((lVar9 == 0) ||
             (lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                (lVar9,*(undefined8 *)PTR_DAT_04caa870,*(undefined8 *)(lVar8 + 0x10)
                                 ,0), lVar9 == 0)) ||
            (lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                               (lVar9,*(undefined8 *)PTR_DAT_04cb2678,*(undefined8 *)(lVar8 + 0x18),
                                0), lVar9 == 0)) ||
           (lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                              (lVar9,*(undefined8 *)PTR_DAT_04cb2690,*(undefined8 *)(lVar8 + 0x20),0
                              ), lVar9 == 0)) goto LAB_023180ec;
        lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                          (lVar9,*(undefined8 *)PTR_DAT_04cb2680,*(undefined8 *)(lVar8 + 0x28),0);
        fVar11 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
        fVar14 = *(float *)(lVar8 + 0x30);
        if (cRam0000000004f9b891 == '\0') {
          FUN_02132f7c(puVar1);
          cRam0000000004f9b891 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar11 = (fVar11 - fVar14) * 1000.0;
        dVar13 = (double)fVar11;
        dVar12 = (double)FUN_049b52f0(dVar13,&dStack_98);
        if (0.0 <= fVar11) {
          if (dVar12 == 0.5) {
            dVar12 = dStack_98 + 1.0;
            goto LAB_0231801c;
          }
          dVar13 = (double)(long)(dVar13 + 0.5);
        }
        else if (dVar12 == -0.5) {
          dVar12 = dStack_98 + -1.0;
LAB_0231801c:
          dVar13 = dStack_98;
          if (((long)dStack_98 & 1U) != 0) {
            dVar13 = dVar12;
          }
        }
        else {
          dVar13 = (double)(long)(dVar13 + -0.5);
        }
        uStack_9c = 0;
        if (dVar13 != INFINITY) {
          uStack_9c = (int)dVar13 & ((int)dVar13 >> 0x1f ^ 0xffffffffU);
        }
        uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_9c);
        if (lVar9 == 0) goto LAB_023180ec;
        uVar7 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                          (lVar9,*(undefined8 *)PTR_DAT_04cb26a8,uVar7,0);
        Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(*(undefined8 *)PTR_DAT_04cb26a0,uVar7,0);
      }
    } while (0 < iVar10);
    lVar8 = *(long *)puVar4;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GameTracking__IapTimeStop_2213dbc();
  return;
}


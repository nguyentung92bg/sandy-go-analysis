/* IL2CPP: Dino.BusSand.App.UI.FailPanel$$OnClose
void Dino_BusSand_App_UI_FailPanel__OnClose (Dino_BusSand_App_UI_FailPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.FailPanel$$OnClose
   void Dino_BusSand_App_UI_FailPanel__OnClose (Dino_BusSand_App_UI_FailPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_FailPanel__OnClose_231780c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  uint uStack_9c;
  double dStack_98;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9c56c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    bRam0000000004f9c56c = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd65 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498,0);
    bRam0000000004f9bd65 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cac498;
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
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = PTR_DAT_04cb2698;
  puVar3 = PTR_DAT_04cb2638;
  puVar1 = PTR_DAT_04caa200;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
  if (lVar7 == 0) {
LAB_023180ec:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar8 = *(int *)(lVar7 + 0x18);
  if (-1 < iVar8 + -1) {
    do {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
      if (lVar5 == 0) goto LAB_023180ec;
      iVar8 = iVar8 + -1;
      lVar5 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar5,iVar8,*(undefined8 *)puVar3);
      if (lVar5 == 0) goto LAB_023180ec;
      if (*(long *)(lVar5 + 0x38) == param_1) {
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar2;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x68);
        if (lVar7 == 0) goto LAB_023180ec;
        System_Collections_Generic_List_object___RemoveAt_3a833a0(lVar7,iVar8,*(undefined8 *)puVar4)
        ;
        if (*(int *)(*(long *)PTR_DAT_04cb2240 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar7 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
        if ((((lVar7 == 0) ||
             (lVar7 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                (lVar7,*(undefined8 *)PTR_DAT_04caa870,*(undefined8 *)(lVar5 + 0x10)
                                 ,0), lVar7 == 0)) ||
            (lVar7 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                               (lVar7,*(undefined8 *)PTR_DAT_04cb2678,*(undefined8 *)(lVar5 + 0x18),
                                0), lVar7 == 0)) ||
           (lVar7 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                              (lVar7,*(undefined8 *)PTR_DAT_04cb2690,*(undefined8 *)(lVar5 + 0x20),0
                              ), lVar7 == 0)) goto LAB_023180ec;
        lVar7 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                          (lVar7,*(undefined8 *)PTR_DAT_04cb2680,*(undefined8 *)(lVar5 + 0x28),0);
        fVar9 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
        fVar12 = *(float *)(lVar5 + 0x30);
        if (cRam0000000004f9b891 == '\0') {
          FUN_02132f7c(puVar1);
          cRam0000000004f9b891 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar9 = (fVar9 - fVar12) * 1000.0;
        dVar11 = (double)fVar9;
        dVar10 = (double)FUN_049b52f0(dVar11,&dStack_98);
        if (0.0 <= fVar9) {
          if (dVar10 == 0.5) {
            dVar10 = dStack_98 + 1.0;
            goto LAB_0231801c;
          }
          dVar11 = (double)(long)(dVar11 + 0.5);
        }
        else if (dVar10 == -0.5) {
          dVar10 = dStack_98 + -1.0;
LAB_0231801c:
          dVar11 = dStack_98;
          if (((long)dStack_98 & 1U) != 0) {
            dVar11 = dVar10;
          }
        }
        else {
          dVar11 = (double)(long)(dVar11 + -0.5);
        }
        uStack_9c = 0;
        if (dVar11 != INFINITY) {
          uStack_9c = (int)dVar11 & ((int)dVar11 >> 0x1f ^ 0xffffffffU);
        }
        uVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_9c);
        if (lVar7 == 0) goto LAB_023180ec;
        uVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                          (lVar7,*(undefined8 *)PTR_DAT_04cb26a8,uVar6,0);
        Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(*(undefined8 *)PTR_DAT_04cb26a0,uVar6,0);
      }
    } while (0 < iVar8);
    lVar5 = *(long *)puVar2;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GameTracking__IapTimeStop_2213dbc();
  return;
}


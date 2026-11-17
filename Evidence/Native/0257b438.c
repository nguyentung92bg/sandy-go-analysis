/* IL2CPP: Dino.Tracking.TrackingEventBase$$MergeCustomParams
void Dino_Tracking_TrackingEventBase__MergeCustomParams (Dino_Tracking_TrackingEventBase_o* __this, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventBase$$MergeCustomParams
   void Dino_Tracking_TrackingEventBase__MergeCustomParams (Dino_Tracking_TrackingEventBase_o*
   __this, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method); */

void Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9cf36 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1900);
    FUN_02132f7c(PTR_DAT_04cc18f8);
    bRam0000000004f9cf36 = 1;
  }
  if (param_2 != 0) {
    if ((bRam0000000004f9cf38 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cc1890);
      bRam0000000004f9cf38 = 1;
    }
    lVar4 = *(long *)(param_2 + 0x10);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != 0)) {
      plVar5 = (long *)(param_1 + 0x10);
      lVar3 = *plVar5;
      if (lVar3 == 0) {
        lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc18f8);
        System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter_____ctor_396cc18
                  (lVar4,*(undefined8 *)PTR_DAT_04cc1900);
        *plVar5 = lVar4;
        thunk_FUN_02134474(plVar5,lVar4);
        lVar3 = *plVar5;
        lVar4 = *(long *)(param_2 + 0x10);
      }
      if ((bRam0000000004f9cecd & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cc1880);
        FUN_02132f7c(PTR_DAT_04cc18b0);
        FUN_02132f7c(PTR_DAT_04cc1890);
        FUN_02132f7c(PTR_DAT_04cc1898);
        bRam0000000004f9cecd = 1;
      }
      puVar1 = PTR_DAT_04cc1898;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x18))) {
        iVar6 = 0;
        do {
          System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
                    (&uStack_a8,lVar4,iVar6,*(undefined8 *)puVar1);
          uVar2 = uStack_a8;
          uStack_68 = uStack_98;
          uStack_70 = uStack_a0;
          uStack_58 = uStack_88;
          uStack_60 = uStack_90;
          uStack_48 = uStack_78;
          uStack_50 = uStack_80;
          System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
                    (&uStack_a8,lVar4,iVar6,*(undefined8 *)puVar1);
          uStack_58 = uStack_88;
          uStack_60 = uStack_90;
          uStack_48 = uStack_78;
          uStack_50 = uStack_80;
          uStack_68 = uStack_98;
          uStack_70 = uStack_a0;
          uStack_d8 = uStack_98;
          uStack_e0 = uStack_a0;
          uStack_c8 = uStack_88;
          uStack_d0 = uStack_90;
          uStack_b8 = uStack_78;
          uStack_c0 = uStack_80;
          Dino_Tracking_CustomParameterList__Set_2476938(lVar3,uVar2,&uStack_e0);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar4 + 0x18));
      }
      return;
    }
  }
  return;
}


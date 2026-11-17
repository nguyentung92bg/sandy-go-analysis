/* IL2CPP: Dino.Tracking.TrackingService$$TrackEvent<__Il2CppFullySharedGenericType>
void Dino_Tracking_TrackingService__TrackEvent___Il2CppFullySharedGenericType_ (Dino_Tracking_TrackingService_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o script, const MethodInfo_28DA980* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService$$TrackEvent<__Il2CppFullySharedGenericType>
   void Dino_Tracking_TrackingService__TrackEvent___Il2CppFullySharedGenericType_
   (Dino_Tracking_TrackingService_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   script, const MethodInfo_28DA980* method); */

void Dino_Tracking_TrackingService__TrackEvent___Il2CppFullySharedGenericType__28da980
               (long param_1,undefined8 ****param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lStack_80;
  undefined8 ***pppuStack_78;
  long *plStack_70;
  long lStack_68;
  
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  plVar15 = *(long **)(param_3 + 0x38);
  pppuStack_78 = param_2;
  if (plVar15 == (long *)0x0) {
    FUN_02132f7c(PTR_DAT_04cc4390);
    FUN_02132f7c(PTR_DAT_04cbf448);
    FUN_02132f7c(PTR_DAT_04cc18e8);
    plVar15 = *(long **)(param_3 + 0x38);
    if (plVar15 == (long *)0x0) {
      FUN_0216b4cc(param_3);
      plVar15 = *(long **)(param_3 + 0x38);
    }
  }
  lVar7 = *plVar15;
  uVar12 = *(uint *)(lVar7 + 0xfc);
  uVar13 = (ulong)uVar12;
  uVar2 = *(ushort *)(lVar7 + 0x135);
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_0216b470(lVar7);
    plVar15 = *(long **)(param_3 + 0x38);
    uVar12 = *(uint *)(lVar7 + 0xfc);
    lVar7 = *plVar15;
    uVar2 = *(ushort *)(lVar7 + 0x135);
  }
  lVar9 = (long)&lStack_80 - ((ulong)(uVar12 + 0x10) + 0xf & 0x1fffffff0);
  lVar10 = lVar7;
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_0216b470(lVar7);
    plVar15 = *(long **)(param_3 + 0x38);
    lVar10 = *plVar15;
  }
  lVar7 = lVar9 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  plVar14 = (long *)(lVar7 - (uVar13 + 0xf & 0x1fffffff0));
  ppppuVar1 = param_2;
  if (-1 < *(int *)(lVar10 + 0x28)) {
    ppppuVar1 = &pppuStack_78;
  }
  func_0x049b5410(plVar14,ppppuVar1,uVar13);
  uVar4 = FUN_021331d4(*plVar15,plVar14);
  if ((uVar4 & 1) != 0) {
    plVar15 = *(long **)(param_3 + 0x38);
    lVar8 = *plVar15;
    lVar10 = lVar8;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0216b470(lVar8);
      plVar15 = *(long **)(param_3 + 0x38);
      lVar10 = *plVar15;
    }
    if (-1 < *(int *)(lVar10 + 0x28)) {
      param_2 = &pppuStack_78;
    }
    FUN_02133bf8(lVar8,plVar15[1],lVar9,param_2,0,&plStack_70);
    plVar15 = plStack_70;
    uVar4 = System_String__IsNullOrEmpty_46d2084(plStack_70,0);
    if ((uVar4 & 1) == 0) {
      if ((*(char *)(param_1 + 0x24) == '\0') || (*(char *)(param_1 + 0x25) == '\0')) {
        plVar14 = *(long **)(param_1 + 0x48);
        if (plVar14 != (long *)0x0) {
          lVar10 = plVar14[3];
          *(undefined4 *)(plVar14 + 3) = 0;
          *(int *)((long)plVar14 + 0x1c) = *(int *)((long)plVar14 + 0x1c) + 1;
          if (0 < (int)lVar10) {
            System_Array__Clear_4851dc8(plVar14[2],0,(int)lVar10,0);
            plVar14 = *(long **)(param_1 + 0x48);
          }
          plVar11 = *(long **)(param_3 + 0x38);
          lVar9 = *plVar11;
          lVar10 = lVar9;
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0216b470(lVar9);
            plVar11 = *(long **)(param_3 + 0x38);
            lVar10 = *plVar11;
          }
          ppppuVar1 = (undefined8 ****)pppuStack_78;
          if (-1 < *(int *)(lVar10 + 0x28)) {
            ppppuVar1 = &pppuStack_78;
          }
          plStack_70 = plVar14;
          FUN_02133bf8(lVar9,plVar11[3],lVar7,ppppuVar1,&plStack_70,plVar14);
          lVar7 = *(long *)(param_1 + 0x48);
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = System_Collections_Generic_List_DinoTrackingParameter___ToArray_3a16828
                                (lVar7,*(undefined8 *)PTR_DAT_04cbf448);
            }
            Dino_Tracking_TrackingService__Enqueue_247fb0c(param_1,plVar15,uVar5,0);
            goto LAB_029dac58;
          }
        }
        if (*(long *)(lVar3 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_029dac9c;
      }
      plVar15 = *(long **)(param_3 + 0x38);
      ppppuVar1 = (undefined8 ****)pppuStack_78;
      if (-1 < *(int *)(*plVar15 + 0x28)) {
        ppppuVar1 = &pppuStack_78;
      }
      func_0x049b5410(plVar14,ppppuVar1,uVar13);
      puVar6 = (undefined8 *)plVar15[2];
      if (-1 < *(int *)(*plVar15 + 0x28)) {
        plVar14 = (long *)*plVar14;
      }
      plStack_70 = plVar14;
      (*(code *)puVar6[2])(*puVar6,puVar6,param_1,&plStack_70,plVar14);
    }
  }
LAB_029dac58:
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return;
  }
LAB_029dac9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


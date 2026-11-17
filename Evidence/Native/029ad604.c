/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$TrackEvent<__Il2CppFullySharedGenericType>
void Dino_Tracking_ServerTrackingProvider__TrackEvent___Il2CppFullySharedGenericType_ (Dino_Tracking_ServerTrackingProvider_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o script, const MethodInfo_28AD604* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$TrackEvent<__Il2CppFullySharedGenericType>
   void Dino_Tracking_ServerTrackingProvider__TrackEvent___Il2CppFullySharedGenericType_
   (Dino_Tracking_ServerTrackingProvider_o* __this,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o script, const MethodInfo_28AD604* method);
    */

void Dino_Tracking_ServerTrackingProvider__TrackEvent___Il2CppFullySharedGenericType__28ad604
               (long param_1,undefined8 ****param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined1 auStack_80 [8];
  undefined8 ***pppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = tpidr_el0;
  lStack_68 = *(long *)(lVar4 + 0x28);
  plVar13 = *(long **)(param_3 + 0x38);
  pppuStack_78 = param_2;
  if (plVar13 == (long *)0x0) {
    FUN_02132f7c(PTR_DAT_04cc4390);
    FUN_02132f7c(PTR_DAT_04cbf448);
    FUN_02132f7c(PTR_DAT_04cc18e8);
    plVar13 = *(long **)(param_3 + 0x38);
    if (plVar13 == (long *)0x0) {
      FUN_0216b4cc(param_3);
      plVar13 = *(long **)(param_3 + 0x38);
    }
  }
  lVar6 = *plVar13;
  uVar10 = *(uint *)(lVar6 + 0xfc);
  uVar11 = (ulong)uVar10;
  uVar3 = *(ushort *)(lVar6 + 0x135);
  if ((uVar3 & 1) == 0) {
    lVar6 = FUN_0216b470(lVar6);
    plVar13 = *(long **)(param_3 + 0x38);
    uVar10 = *(uint *)(lVar6 + 0xfc);
    lVar6 = *plVar13;
    uVar3 = *(ushort *)(lVar6 + 0x135);
  }
  lVar7 = lVar6;
  if ((uVar3 & 1) == 0) {
    lVar6 = FUN_0216b470(lVar6);
    plVar13 = *(long **)(param_3 + 0x38);
    lVar7 = *plVar13;
  }
  lVar6 = (long)(auStack_80 + -((ulong)(uVar10 + 0x10) + 0xf & 0x1fffffff0)) -
          ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar12 = lVar6 - (uVar11 + 0xf & 0x1fffffff0);
  ppppuVar1 = param_2;
  if (-1 < *(int *)(lVar7 + 0x28)) {
    ppppuVar1 = &pppuStack_78;
  }
  func_0x049b5410(lVar12,ppppuVar1,uVar11);
  uVar11 = FUN_021331d4(*plVar13,lVar12);
  if ((uVar11 & 1) != 0) {
    plVar13 = *(long **)(param_3 + 0x38);
    lVar12 = *plVar13;
    lVar7 = lVar12;
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470(lVar12);
      plVar13 = *(long **)(param_3 + 0x38);
      lVar7 = *plVar13;
    }
    if (-1 < *(int *)(lVar7 + 0x28)) {
      param_2 = &pppuStack_78;
    }
    FUN_02133bf8(lVar12,plVar13[1],auStack_80 + -((ulong)(uVar10 + 0x10) + 0xf & 0x1fffffff0),
                 param_2,0,&lStack_70);
    lVar7 = lStack_70;
    uVar11 = System_String__IsNullOrEmpty_46d2084(lStack_70,0);
    if (((uVar11 & 1) == 0) && (*(long *)(param_1 + 0x20) != 0)) {
      lVar12 = *(long *)(param_1 + 0x30);
      if (lVar12 != 0) {
        iVar2 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (0 < iVar2) {
          System_Array__Clear_4851dc8(*(undefined8 *)(lVar12 + 0x10),0,iVar2,0);
          lVar12 = *(long *)(param_1 + 0x30);
        }
        plVar13 = *(long **)(param_3 + 0x38);
        lVar8 = *plVar13;
        lVar9 = lVar8;
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470(lVar8);
          plVar13 = *(long **)(param_3 + 0x38);
          lVar9 = *plVar13;
        }
        ppppuVar1 = (undefined8 ****)pppuStack_78;
        if (-1 < *(int *)(lVar9 + 0x28)) {
          ppppuVar1 = &pppuStack_78;
        }
        lStack_70 = lVar12;
        FUN_02133bf8(lVar8,plVar13[2],lVar6,ppppuVar1,&lStack_70,lVar12);
        lVar6 = *(long *)(param_1 + 0x30);
        if (lVar6 != 0) {
          lVar12 = *(long *)(param_1 + 0x20);
          if (*(int *)(lVar6 + 0x18) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = System_Collections_Generic_List_DinoTrackingParameter___ToArray_3a16828
                              (lVar6,*(undefined8 *)PTR_DAT_04cbf448);
          }
          if (lVar12 != 0) {
            Dino_Tracking_ServerTrackingCore__Enqueue_2460e14(lVar12,lVar7,uVar5,0);
            Dino_Tracking_ServerTrackingProvider__FlushNow_2462ae0(param_1,0);
            goto LAB_029ad884;
          }
        }
      }
      if (*(long *)(lVar4 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_029ad8d0;
    }
  }
LAB_029ad884:
  if (*(long *)(lVar4 + 0x28) == lStack_68) {
    return;
  }
LAB_029ad8d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$TrackEvent<__Il2CppFullySharedGenericType>
void Dino_BusSand_Sdk_SandBusTrackingProvider__TrackEvent___Il2CppFullySharedGenericType_ (Dino_BusSand_Sdk_SandBusTrackingProvider_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o script, const MethodInfo_28A8E64* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$TrackEvent<__Il2CppFullySharedGenericType>
   void Dino_BusSand_Sdk_SandBusTrackingProvider__TrackEvent___Il2CppFullySharedGenericType_
   (Dino_BusSand_Sdk_SandBusTrackingProvider_o* __this,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o script, const MethodInfo_28A8E64* method);
    */

void Dino_BusSand_Sdk_SandBusTrackingProvider__TrackEvent___Il2CppFullySharedGenericType__28a8e64
               (long param_1,undefined8 ****param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined1 auStack_80 [8];
  undefined8 ***pppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = tpidr_el0;
  lStack_68 = *(long *)(lVar4 + 0x28);
  plVar12 = *(long **)(param_3 + 0x38);
  pppuStack_78 = param_2;
  if (plVar12 == (long *)0x0) {
    FUN_02132f7c(PTR_DAT_04cc4390);
    plVar12 = *(long **)(param_3 + 0x38);
    if (plVar12 == (long *)0x0) {
      FUN_0216b4cc(param_3);
      plVar12 = *(long **)(param_3 + 0x38);
    }
  }
  lVar6 = *plVar12;
  uVar8 = *(uint *)(lVar6 + 0xfc);
  uVar10 = (ulong)uVar8;
  uVar3 = *(ushort *)(lVar6 + 0x135);
  if ((uVar3 & 1) == 0) {
    lVar6 = FUN_0216b470(lVar6);
    plVar12 = *(long **)(param_3 + 0x38);
    uVar8 = *(uint *)(lVar6 + 0xfc);
    lVar6 = *plVar12;
    uVar3 = *(ushort *)(lVar6 + 0x135);
  }
  lVar5 = lVar6;
  if ((uVar3 & 1) == 0) {
    lVar6 = FUN_0216b470(lVar6);
    plVar12 = *(long **)(param_3 + 0x38);
    uVar3 = *(ushort *)(*plVar12 + 0x135);
    lVar5 = *plVar12;
  }
  lVar9 = (long)(auStack_80 + -((ulong)(uVar8 + 0x10) + 0xf & 0x1fffffff0)) -
          ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar6 = lVar5;
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_0216b470(lVar5);
    plVar12 = *(long **)(param_3 + 0x38);
    lVar6 = *plVar12;
  }
  lVar5 = lVar9 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar11 = lVar5 - (uVar10 + 0xf & 0x1fffffff0);
  ppppuVar1 = param_2;
  if (-1 < *(int *)(lVar6 + 0x28)) {
    ppppuVar1 = &pppuStack_78;
  }
  func_0x049b5410(lVar11,ppppuVar1,uVar10);
  uVar10 = FUN_021331d4(*plVar12,lVar11);
  if ((uVar10 & 1) != 0) {
    plVar12 = *(long **)(param_3 + 0x38);
    lVar11 = *plVar12;
    lVar6 = lVar11;
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0216b470(lVar11);
      plVar12 = *(long **)(param_3 + 0x38);
      lVar6 = *plVar12;
    }
    if (-1 < *(int *)(lVar6 + 0x28)) {
      param_2 = &pppuStack_78;
    }
    FUN_02133bf8(lVar11,plVar12[1],auStack_80 + -((ulong)(uVar8 + 0x10) + 0xf & 0x1fffffff0),param_2
                 ,0,&lStack_70);
    uVar10 = System_String__IsNullOrEmpty_46d2084(lStack_70,0);
    if ((uVar10 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 == 0) {
        if (*(long *)(lVar4 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_029a9160;
      }
      iVar2 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar2) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar6 + 0x10),0,iVar2,0);
        lVar6 = *(long *)(param_1 + 0x18);
      }
      plVar12 = *(long **)(param_3 + 0x38);
      lVar7 = *plVar12;
      lVar11 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0216b470(lVar7);
        plVar12 = *(long **)(param_3 + 0x38);
        lVar11 = *plVar12;
      }
      ppppuVar1 = (undefined8 ****)pppuStack_78;
      if (-1 < *(int *)(lVar11 + 0x28)) {
        ppppuVar1 = &pppuStack_78;
      }
      lStack_70 = lVar6;
      FUN_02133bf8(lVar7,plVar12[2],lVar9,ppppuVar1,&lStack_70,lVar6);
      plVar12 = *(long **)(param_3 + 0x38);
      lVar9 = *plVar12;
      lVar6 = lVar9;
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470(lVar9);
        plVar12 = *(long **)(param_3 + 0x38);
        lVar6 = *plVar12;
      }
      ppppuVar1 = (undefined8 ****)pppuStack_78;
      if (-1 < *(int *)(lVar6 + 0x28)) {
        ppppuVar1 = &pppuStack_78;
      }
      FUN_02133bf8(lVar9,plVar12[1],lVar5,ppppuVar1,0,&lStack_70);
      Dino_BusSand_Sdk_SandBusTrackingProvider__Send_24396a4
                (param_1,lStack_70,*(undefined8 *)(param_1 + 0x18),0);
    }
  }
  if (*(long *)(lVar4 + 0x28) == lStack_68) {
    return;
  }
LAB_029a9160:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


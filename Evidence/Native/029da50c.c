/* IL2CPP: Dino.Tracking.TrackingService$$Forward<__Il2CppFullySharedGenericType>
void Dino_Tracking_TrackingService__Forward___Il2CppFullySharedGenericType_ (Dino_Tracking_TrackingService_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o script, const MethodInfo_28DA50C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService$$Forward<__Il2CppFullySharedGenericType>
   void Dino_Tracking_TrackingService__Forward___Il2CppFullySharedGenericType_
   (Dino_Tracking_TrackingService_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   script, const MethodInfo_28DA50C* method); */

void Dino_Tracking_TrackingService__Forward___Il2CppFullySharedGenericType__28da50c
               (long param_1,undefined8 ****param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long lStack_80;
  undefined8 ***pppuStack_78;
  long *plStack_70;
  long lStack_68;
  
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  plVar12 = *(long **)(param_3 + 0x38);
  pppuStack_78 = param_2;
  if (plVar12 == (long *)0x0) {
    FUN_0216b4cc(param_3);
    plVar12 = *(long **)(param_3 + 0x38);
  }
  uVar8 = (ulong)*(uint *)(*plVar12 + 0xfc);
  plVar9 = (long *)((long)&lStack_80 - (uVar8 + 0xf & 0x1fffffff0));
  iVar2 = *(int *)(*plVar12 + 0x28);
  plVar10 = *(long **)(param_1 + 0x28);
  ppppuVar1 = param_2;
  if (-1 < iVar2) {
    ppppuVar1 = &pppuStack_78;
  }
  func_0x049b5410(plVar9,ppppuVar1,uVar8);
  if (plVar10 == (long *)0x0) {
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  else {
    lVar13 = plVar12[1];
    plVar12 = plVar9;
    if (-1 < iVar2) {
      plVar12 = (long *)*plVar9;
    }
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)(lVar13 + 0x20)) {
          lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
          goto LAB_029da5fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar5 = FUN_0216b7a4(plVar10);
LAB_029da5fc:
    lStack_80 = lVar3;
    lVar3 = thunk_FUN_02150f88(*(undefined8 *)(lVar5 + 8),lVar13);
    plStack_70 = plVar12;
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar10,&plStack_70,plVar12);
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      uVar4 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar4) {
        uVar14 = 0;
        do {
          if (uVar4 <= uVar14) {
            if (*(long *)(lStack_80 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            goto LAB_029da784;
          }
          plVar10 = *(long **)(param_3 + 0x38);
          plVar12 = *(long **)(lVar3 + (long)(int)uVar14 * 8 + 0x20);
          ppppuVar1 = param_2;
          if (-1 < *(int *)(*plVar10 + 0x28)) {
            ppppuVar1 = &pppuStack_78;
          }
          func_0x049b5410(plVar9,ppppuVar1,uVar8);
          if (plVar12 == (long *)0x0) goto LAB_029da74c;
          plVar11 = plVar9;
          if (-1 < *(int *)(*plVar10 + 0x28)) {
            plVar11 = (long *)*plVar9;
          }
          lVar13 = *plVar12;
          lVar5 = plVar10[1];
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)(lVar5 + 0x20)) {
                lVar13 = lVar13 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_029da6e0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          lVar13 = FUN_0216b7a4(plVar12);
LAB_029da6e0:
          lVar13 = thunk_FUN_02150f88(*(undefined8 *)(lVar13 + 8),lVar5);
          plStack_70 = plVar11;
          (**(code **)(lVar13 + 0x10))
                    (*(undefined8 *)(lVar13 + 8),lVar13,plVar12,&plStack_70,plVar11);
          uVar4 = *(uint *)(lVar3 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar4);
      }
      if (*(long *)(lStack_80 + 0x28) == lStack_68) {
        return;
      }
      goto LAB_029da784;
    }
LAB_029da74c:
    lVar3 = *(long *)(lStack_80 + 0x28);
  }
  if (lVar3 == lStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_029da784:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


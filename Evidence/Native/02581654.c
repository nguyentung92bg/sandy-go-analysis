/* IL2CPP: Dino.Tracking.UserPropertyAutoTracker$$PushAll
void Dino_Tracking_UserPropertyAutoTracker__PushAll (Dino_Tracking_UserPropertyAutoTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.UserPropertyAutoTracker$$PushAll
   void Dino_Tracking_UserPropertyAutoTracker__PushAll (Dino_Tracking_UserPropertyAutoTracker_o*
   __this, const MethodInfo* method); */

void Dino_Tracking_UserPropertyAutoTracker__PushAll_2481654(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uStack_3c;
  long *plStack_38;
  
  puVar1 = PTR_DAT_04cbf1c8;
  if ((bRam0000000004f9cfba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc22d8);
    FUN_02132f7c(PTR_DAT_04cbf1c8);
    FUN_02132f7c(PTR_DAT_04caabc8);
    FUN_02132f7c(PTR_DAT_04caafe8);
    FUN_02132f7c(PTR_DAT_04cc0398);
    FUN_02132f7c(PTR_DAT_04cb4ae0);
    bRam0000000004f9cfba = 1;
  }
  plStack_38 = (long *)0x0;
  uStack_3c = 0;
  uVar3 = Dino_IGlobalService_object___TryGet_37f7630(&plStack_38,*(undefined8 *)puVar1);
  plVar2 = plStack_38;
  if ((uVar3 & 1) == 0) {
    return;
  }
  plVar8 = *(long **)(param_1 + 0x28);
  if (plVar8 != (long *)0x0) {
    lVar6 = *plVar8;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caafe8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02581744;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04caafe8,0);
LAB_02581744:
    uVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    puVar1 = PTR_DAT_04caabc8;
    if (plVar2 != (long *)0x0) {
      lVar6 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_04cc0398;
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caabc8) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_025817bc;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_0216b7a4(plVar2,*(long *)PTR_DAT_04caabc8,3);
LAB_025817bc:
      (*(code *)*puVar4)(plVar2,uVar9,uVar5,puVar4[1]);
      plVar2 = plStack_38;
      plVar8 = *(long **)(param_1 + 0x30);
      if (plVar8 != (long *)0x0) {
        lVar6 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04cc22d8) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02581830;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04cc22d8,0);
LAB_02581830:
        uStack_3c = (*(code *)*puVar4)(plVar8,puVar4[1]);
        uVar5 = System_Int32__ToString_482d750(&uStack_3c,0);
        if (plVar2 != (long *)0x0) {
          lVar6 = *plVar2;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          uVar9 = *(undefined8 *)PTR_DAT_04cb4ae0;
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                goto LAB_025818b0;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_0216b7a4(plVar2,*(long *)puVar1,3);
LAB_025818b0:
          (*(code *)*puVar4)(plVar2,uVar9,uVar5,puVar4[1]);
          Dino_Tracking_UserPropertyAutoTracker__PushConnectionType_24818ec();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


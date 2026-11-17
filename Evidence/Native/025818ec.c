/* IL2CPP: Dino.Tracking.UserPropertyAutoTracker$$PushConnectionType
void Dino_Tracking_UserPropertyAutoTracker__PushConnectionType (Dino_Tracking_UserPropertyAutoTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.UserPropertyAutoTracker$$PushConnectionType
   void Dino_Tracking_UserPropertyAutoTracker__PushConnectionType
   (Dino_Tracking_UserPropertyAutoTracker_o* __this, const MethodInfo* method); */

void Dino_Tracking_UserPropertyAutoTracker__PushConnectionType_24818ec(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plStack_28;
  
  puVar1 = PTR_DAT_04cbf1c8;
  if ((bRam0000000004f9cfbb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cbf1c8);
    FUN_02132f7c(PTR_DAT_04caabc8);
    FUN_02132f7c(PTR_DAT_04cc22d0);
    bRam0000000004f9cfbb = 1;
  }
  plStack_28 = (long *)0x0;
  uVar3 = Dino_IGlobalService_object___TryGet_37f7630(&plStack_28,*(undefined8 *)puVar1);
  plVar2 = plStack_28;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Application__get_internetReachability_4352df4(0);
    uVar4 = Dino_Tracking_ConnectionTypeMapper__Map_2480d34();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_04cc22d0;
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caabc8) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_025819ec;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(plVar2,*(long *)PTR_DAT_04caabc8,3);
LAB_025819ec:
    (*(code *)*puVar5)(plVar2,uVar8,uVar4,puVar5[1]);
  }
  return;
}


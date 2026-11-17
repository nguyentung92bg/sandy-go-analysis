/* IL2CPP: Dino.Tracking.TrackingDebugger$$OverrideToServer
void Dino_Tracking_TrackingDebugger__OverrideToServer (Dino_Tracking_TrackingDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingDebugger$$OverrideToServer
   void Dino_Tracking_TrackingDebugger__OverrideToServer (Dino_Tracking_TrackingDebugger_o* __this,
   const MethodInfo* method); */

void Dino_Tracking_TrackingDebugger__OverrideToServer_2463ce8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar2 = PTR_DAT_04cbf1c8;
  if ((bRam0000000004f9ce42 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbf1c8);
    FUN_02132f7c(PTR_DAT_04caabc8);
    FUN_02132f7c(PTR_DAT_04cc09d0);
    FUN_02132f7c(PTR_DAT_04cc0928);
    FUN_02132f7c(PTR_DAT_04cc0b00);
    FUN_02132f7c(PTR_DAT_04cc0b08);
    bRam0000000004f9ce42 = 1;
  }
  puVar1 = PTR_DAT_04ca9af8;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  uVar5 = Dino_IGlobalService_object___TryGet_37f7630(&plStack_28,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_04cc0b00;
  puVar2 = PTR_DAT_04cc09d0;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Debug__LogWarning_4357a30(*(undefined8 *)puVar3,0);
    return;
  }
  Sisus_Init_Service__TryGet_object__28b2b2c(&uStack_30,*(undefined8 *)PTR_DAT_04cc0928);
  uVar8 = uStack_30;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_Tracking_ServerTrackingProvider___ctor_2460740(lVar6,uVar8);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    lVar9 = *plStack_28;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04caabc8) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_02563e3c;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plStack_28,*(long *)PTR_DAT_04caabc8,4);
LAB_02563e3c:
    (*(code *)*puVar7)(plVar4,lVar6,puVar7[1]);
    Dino_Tracking_ServerTrackingTicker__EnsureRunning_2460a38();
    Dino_Tracking_ServerTrackingAutoRouter__set_UseServerPreference_2460560(1);
    if (lVar6 != 0) {
      uVar8 = System_String__Concat_46c82e0
                        (*(undefined8 *)PTR_DAT_04cc0b08,*(undefined8 *)(lVar6 + 0x18),0);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar6);
      }
      UnityEngine_Debug__Log_4360fc8(uVar8,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


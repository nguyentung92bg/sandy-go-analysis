/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<Fall>d__47$$MoveNext
bool Dino_BusSand_App_UI_WinStreakPanel__Fall_d__47__MoveNext (Dino_BusSand_App_UI_WinStreakPanel__Fall_d__47_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<Fall>d__47$$MoveNext
   bool Dino_BusSand_App_UI_WinStreakPanel__Fall_d__47__MoveNext
   (Dino_BusSand_App_UI_WinStreakPanel__Fall_d__47_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_WinStreakPanel__Fall_d__47__MoveNext_233ac7c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c65a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9350);
    FUN_02132f7c(PTR_DAT_04cb9358);
    FUN_02132f7c(PTR_DAT_04cb9360);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cb9368);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c65a = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x20);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (iVar1 == 2) {
    fVar9 = *(float *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar13 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    fVar9 = fVar9 + fVar13;
    *(float *)(param_1 + 0x30) = fVar9;
    if (0.5 <= fVar9) {
      if (lVar6 != 0) {
        *(float *)(lVar6 + 0xb0) = (float)*(int *)(param_1 + 0x28);
        Dino_BusSand_App_UI_WinStreakPanel__SetFloor_233775c(lVar6,1);
        uVar7 = *(undefined8 *)(lVar6 + 0x58);
        if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e201f4,_UNK_00e207cc,uVar7,0,0,0);
        puVar2 = PTR_DAT_04cad568;
        if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar2;
        }
        if (**(long **)(lVar8 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Thud_23839a0(_UNK_00e20180,**(long **)(lVar8 + 0xb8),0);
        }
        if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Haptics__Play_2388ed8(1,0);
        if (*(long *)(lVar6 + 0xa8) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_58,*(long *)(lVar6 + 0xa8),*(undefined8 *)PTR_DAT_04cb9368);
          puVar2 = PTR_DAT_04cb9358;
          while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                   (&uStack_58,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
            Dino_BusSand_App_UI_WinStreakPanel__RefreshStop_2338440(lVar6,uStack_48,0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_58,*(undefined8 *)PTR_DAT_04cb9350);
          return 0;
        }
      }
      goto LAB_0243b114;
    }
LAB_0243b05c:
    fVar13 = *(float *)(param_1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar9 = (float)Dino_BusSand_App_UI_UiMotion__OutQuad_228a4fc(fVar9 + fVar9,0);
    if (lVar6 != 0) {
      fVar11 = 1.0;
      if (fVar9 <= 1.0) {
        fVar11 = fVar9;
      }
      fVar12 = 0.0;
      if (0.0 <= fVar9) {
        fVar12 = fVar11;
      }
      Dino_BusSand_App_UI_WinStreakPanel__SetFloor_233775c
                (fVar13 + ((float)iVar1 - fVar13) * fVar12,lVar6,1);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
  }
  else {
    if (iVar1 == 1) {
      fVar13 = *(float *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      fVar9 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      fVar13 = fVar13 + fVar9;
      bVar3 = _UNK_00e2098c <= fVar13;
      *(float *)(param_1 + 0x30) = fVar13;
      if (bVar3) {
        if (lVar6 == 0) goto LAB_0243b114;
        lVar8 = *(long *)(lVar6 + 0x68);
        if (cRam0000000004f9b88b == '\0') {
          FUN_02132f7c(PTR_DAT_04cab4b0);
          cRam0000000004f9b88b = '\x01';
        }
        if (lVar8 == 0) goto LAB_0243b114;
        puVar5 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
        UnityEngine_Transform__set_localRotation_43d156c
                  (*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar8,0);
        puVar2 = PTR_DAT_04cad568;
        if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar2;
        }
        if (**(long **)(lVar8 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Nope_2383330(**(long **)(lVar8 + 0xb8),0);
          lVar8 = *(long *)puVar2;
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar2;
        }
        if (**(long **)(lVar8 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Whoosh_2382bbc(0x3f400000,**(long **)(lVar8 + 0xb8),0);
        }
        fVar9 = 0.0;
        uVar10 = *(undefined4 *)(lVar6 + 0xb0);
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x2c) = uVar10;
        goto LAB_0243b05c;
      }
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      fVar13 = 0.0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x68);
      fVar9 = (float)func_0x049b5320(fVar13 * 60.0);
      UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                (0,0,(fVar13 / _UNK_00e1fefc + 1.0) * fVar9 * 4.0 * _UNK_00e20a74,0);
      if (lVar6 != 0) {
        UnityEngine_Transform__set_localRotation_43d156c(lVar6,0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
  }
LAB_0243b114:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


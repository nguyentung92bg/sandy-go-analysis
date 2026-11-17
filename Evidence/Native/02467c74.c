/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$ResetTransientState
void Dino_BusSand_Cheat_CheatManager__ResetTransientState (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02467804) */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$ResetTransientState
   void Dino_BusSand_Cheat_CheatManager__ResetTransientState (Dino_BusSand_Cheat_CheatManager_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__ResetTransientState_2367c74(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  
  if ((bRam0000000004f9c767 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04cba9e8);
    FUN_02132f7c(PTR_DAT_04cab448);
    FUN_02132f7c(PTR_DAT_04cb8528);
    FUN_02132f7c(PTR_DAT_04cacb20);
    FUN_02132f7c(PTR_DAT_04cb8548);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cba9f0);
    bRam0000000004f9c767 = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar11 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_02133068(*(undefined8 *)PTR_DAT_04cba9f0,2);
    if (lVar6 == 0) goto LAB_02467f68;
    iVar9 = (int)*(ulong *)(lVar6 + 0x18);
    if ((iVar9 == 0) || (*(undefined4 *)(lVar6 + 0x20) = 2, iVar9 == 1)) {
LAB_02467f6c:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined4 *)(lVar6 + 0x24) = 3;
    puVar3 = PTR_DAT_04cba9e8;
    if (0 < iVar9) {
      uVar5 = 0;
      uVar10 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar5) goto LAB_02467f6c;
        if (((lVar11 == 0) ||
            (lVar7 = Dino_BusSand_App_UI_UIManager__Layer_21fe220
                               (lVar11,*(undefined4 *)(lVar6 + uVar5 * 4 + 0x20),0), lVar7 == 0)) ||
           (lVar7 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                              (lVar7,1,*(undefined8 *)puVar3), lVar7 == 0)) goto LAB_02467f68;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) goto LAB_02467f6c;
            lVar8 = *(long *)(lVar7 + (long)(int)uVar12 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_02467f68;
            if (*(char *)(lVar8 + 0x2c) == '\0') {
              Dino_BusSand_App_UI_UIManager__Close_21fe9a0(lVar11,lVar8,0);
            }
            uVar1 = *(uint *)(lVar7 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar1);
        }
        uVar10 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
  }
  puVar3 = PTR_DAT_04cb8548;
  if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Cheat_CheatManager__CloseGuide_235ece8();
  lVar11 = *(long *)puVar3;
  *(undefined2 *)(param_1 + 0x121) = 0;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_04cacb20;
  if (**(long **)(lVar11 + 0xb8) != 0) {
    System_Collections_Generic_HashSet_int___Clear_37db554
              (**(long **)(lVar11 + 0xb8),*(undefined8 *)PTR_DAT_04cb8528);
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar3;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 != 0) {
      lVar6 = *(long *)PTR_DAT_04cab448;
      *(undefined4 *)(lVar11 + 0x18) = 0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Fx__ClearAll_21517b4(0);
      if (*(long *)(param_1 + 0x118) != 0) {
        Dino_BusSand_Cheat_CheatHint__Hide_235c314();
        if ((bRam0000000004f9c776 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cba4d0);
          bRam0000000004f9c776 = 1;
        }
        if (*(char *)(param_1 + 0x141) != '\0') {
          *(undefined1 *)(param_1 + 0x141) = 0;
        }
        puVar3 = PTR_DAT_04cac868;
        if (*(char *)(param_1 + 0x138) == '\0') {
          return;
        }
        if ((bRam0000000004f9c771 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cac868);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cba9a0);
          FUN_02132f7c(PTR_DAT_04cb8788);
          FUN_02132f7c(PTR_DAT_04cab2b8);
          bRam0000000004f9c771 = 1;
        }
        lVar11 = *(long *)puVar3;
        *(undefined1 *)(param_1 + 0x138) = 0;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9bcf9 == '\0') {
          FUN_02132f7c(PTR_DAT_04cac868);
          cRam0000000004f9bcf9 = '\x01';
        }
        puVar2 = PTR_DAT_04ca9ae8;
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar3;
        }
        lVar11 = **(long **)(lVar11 + 0xb8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dd50(lVar11,0,0);
        }
        Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
        UnityEngine_Time__set_timeScale_43cd6d8(0);
        *(undefined1 *)(param_1 + 0x140) = 1;
        Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
        uVar4 = System_Single__ToString_48425d0(&stack0xffffffffffffffcc,0);
        uVar4 = System_String__Concat_46d2b84
                          (*(undefined8 *)PTR_DAT_04cba9a0,uVar4,*(undefined8 *)PTR_DAT_04cab2b8,0);
        Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar4);
        return;
      }
    }
  }
LAB_02467f68:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


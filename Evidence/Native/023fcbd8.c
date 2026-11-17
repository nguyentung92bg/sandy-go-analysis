/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$RefreshHeartTime
void Dino_BusSand_App_UI_MainHudPanel__RefreshHeartTime (Dino_BusSand_App_UI_MainHudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$RefreshHeartTime
   void Dino_BusSand_App_UI_MainHudPanel__RefreshHeartTime (Dino_BusSand_App_UI_MainHudPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_MainHudPanel__RefreshHeartTime_22fcbd8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c4ad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae520);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb7ad8);
    FUN_02132f7c(PTR_DAT_04cb7ae0);
    bRam0000000004f9c4ad = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x70) == 2) {
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar6 = UnityEngine_Transform__Find_43d4bec
                        (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cb7ae0,0);
      puVar2 = PTR_DAT_04cabaf8;
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabaf8);
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar2;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar8 + 0x38);
        lVar8 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
        }
        lVar8 = System_Math__Max_4830fd4(0,lVar9 - lVar8,0);
        if (*(int *)(*(long *)PTR_DAT_04cae520 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cae520);
        }
        goto Dino_BusSand_App_UI_MainHudPanel__SetTexts_22fbba8;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x70) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar6 = UnityEngine_Transform__Find_43d4bec
                        (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cb7ad8,0);
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabaf8);
      }
      iVar3 = Dino_BusSand_App_Meta_Profile__SecondsToNextHeart_2272b38(0);
      if (*(int *)(*(long *)PTR_DAT_04cae520 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cae520);
      }
      lVar8 = (long)iVar3;
Dino_BusSand_App_UI_MainHudPanel__SetTexts_22fbba8:
      uVar7 = Dino_BusSand_App_UI_MainHudPanel__TimeString_22fcdf0(lVar8);
      puVar2 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004f9c4bb & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cada48);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9c4bb = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
      if ((uVar5 & 1) == 0) {
        if ((lVar6 == 0) ||
           (lVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                              (lVar6,1,*(undefined8 *)PTR_DAT_04cada48), lVar6 == 0)) {
LAB_023fbc90:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar1) {
          lVar8 = 0;
          do {
            if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar4 = *(long **)(lVar6 + 0x20 + lVar8 * 8);
            if (plVar4 == (long *)0x0) goto LAB_023fbc90;
            (**(code **)(*plVar4 + 0x518))(plVar4,uVar7,*(undefined8 *)(*plVar4 + 0x520));
            uVar1 = *(uint *)(lVar6 + 0x18);
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < (int)uVar1);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$SnapForward
void Dino_BusSand_App_UI_YachtRacingTrackRow__SnapForward (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, float targetY, bool finish, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$SnapForward
   void Dino_BusSand_App_UI_YachtRacingTrackRow__SnapForward
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, float targetY, bool finish, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_YachtRacingTrackRow__SnapForward_21f685c
               (undefined4 param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc3a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc3a = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(param_2 + 0x48);
    if (lVar5 == 0) goto LAB_022f6a68;
    uVar7 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar5,0);
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(uVar7,param_1,lVar5,0);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x68);
    uVar4 = System_Int32__ToString_482d750(*(long *)(param_2 + 0x20) + 0x14,0);
    Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar6,uVar4);
    if (*(long *)(param_2 + 0x20) != 0) {
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8
                (*(undefined8 *)(param_2 + 0x80),*(int *)(*(long *)(param_2 + 0x20) + 0x28) == 1);
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f6568(*(undefined8 *)(param_2 + 0xb0),0);
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f6568
                (*(undefined8 *)(param_2 + 0xa8),(param_3 ^ 0xffffffff) & 1);
      if ((~param_3 & 1) != 0) {
        return;
      }
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_2 + 0x48),0);
      if (*(long *)(param_2 + 0x20) != 0) {
        lVar5 = 0x58;
        if (*(char *)(*(long *)(param_2 + 0x20) + 0x2c) != '\0') {
          lVar5 = 0x50;
        }
        lVar5 = *(long *)(param_2 + lVar5);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
        if ((uVar2 & 1) != 0) {
          return;
        }
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        if (lVar5 != 0) {
          lVar3 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
          UnityEngine_Transform__set_localScale_43d1be0
                    (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                     *(undefined4 *)(lVar3 + 0x14),lVar5,0);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                    (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                     (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],lVar5,0);
          lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0);
          if (lVar5 != 0) {
            if ((bRam0000000004fa8360 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf5bd0,1,0);
              bRam0000000004fa8360 = 1;
            }
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar3 = *(long *)(lVar5 + 0x10);
            if (lVar3 != 0) {
              if (pcRam0000000004fa8430 == (code *)0x0) {
                pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
              }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8430)(lVar3,1);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
          }
        }
      }
    }
  }
LAB_022f6a68:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


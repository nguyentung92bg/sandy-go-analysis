/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$HideAll
void Dino_BusSand_App_UI_YachtRacingHallButton__HideAll (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$HideAll
   void Dino_BusSand_App_UI_YachtRacingHallButton__HideAll
   (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingHallButton__HideAll_21e98f4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x38),0,0);
  Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x40),0,0);
  Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x50),0,0);
  Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x58),0,0);
  Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x48),0,0);
  Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x78),0,0);
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022e995c to 023e9963 has its CatchHandler @ 022e99c0 */
  lVar3 = *(long *)(param_1 + 0x68);
                    /* try { // try from 022e9964 to 023e99ef has its CatchHandler @ 022e98c4 */
  if ((bRam0000000004f9bc50 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
    bRam0000000004f9bc50 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((lVar3 != 0) && (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0), lVar5 != 0))
  {
    uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar5,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
    if (lVar3 != 0) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = *(long *)(lVar3 + 0x10);
      if (lVar5 != 0) {
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar5,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


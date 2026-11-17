/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$ActiveYacht
void Dino_BusSand_App_UI_YachtRacingTrackRow__ActiveYacht (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$ActiveYacht
   void Dino_BusSand_App_UI_YachtRacingTrackRow__ActiveYacht
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, bool isActive, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingTrackRow__ActiveYacht_21f6310(long param_1,uint param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((param_2 & 1) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(param_1 + 0x34) == '\0';
  }
  Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x48),bVar2);
  puVar1 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)(param_1 + 0x78);
  param_2 = param_2 & 1;
  if ((bRam0000000004f9bc50 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc50 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((lVar6 != 0) && (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar5 != 0))
  {
    uVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar5,0);
    if ((uVar3 & 1) == param_2) {
      return;
    }
    lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
    if (lVar6 != 0) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,param_2,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = *(long *)(lVar6 + 0x10);
      if (lVar5 != 0) {
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar5,param_2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


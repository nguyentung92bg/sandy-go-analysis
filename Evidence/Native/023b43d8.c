/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$Card
void Dino_BusSand_App_UI_RemoveAdsPanel__Card (Dino_BusSand_App_UI_ArtPopup_Parts_o* a, float left, float right, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$Card
   void Dino_BusSand_App_UI_RemoveAdsPanel__Card (Dino_BusSand_App_UI_ArtPopup_Parts_o* a, float
   left, float right, const MethodInfo* method); */

void Dino_BusSand_App_UI_RemoveAdsPanel__Card_22b43d8(float param_1,float param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04cad468;
  if ((bRam0000000004f9c2df & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad468);
    FUN_02132f7c(PTR_DAT_04cb6210);
    FUN_02132f7c(PTR_DAT_04cafc48);
    bRam0000000004f9c2df = 1;
  }
  puVar3 = PTR_DAT_04cb6210;
  puVar2 = PTR_DAT_04cafc48;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_UI_ArtPopup__Plate_217e948
                    (param_2 - param_1,0x43b80000,(param_1 + param_2) * 0.5,0x44900000,param_3,
                     *(undefined8 *)puVar2,*(undefined8 *)puVar3,0);
  if ((((lVar5 != 0) &&
       (lVar5 = UnityEngine_Component__get_transform_43bcd18(lVar5,0), param_3 != 0)) &&
      (*(long *)(param_3 + 0x18) != 0)) &&
     ((lVar6 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_3 + 0x18),0), lVar6 != 0
      && (iVar4 = UnityEngine_Transform__GetSiblingIndex_43d48f4(lVar6,0), lVar5 != 0)))) {
    if ((bRam0000000004fa8b6a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,iVar4 + 1,0);
      bRam0000000004fa8b6a = 1;
    }
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 != 0) {
        if (pcRam0000000004fa8cd0 == (code *)0x0) {
          pcRam0000000004fa8cd0 = (code *)FUN_02132f40(&UNK_00e5f593);
        }
                    /* WARNING: Could not recover jumptable at 0x044d479c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8cd0)(lVar5,iVar4 + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


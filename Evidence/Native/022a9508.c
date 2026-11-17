/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$SetTexts
void Dino_BusSand_App_UI_GiftPackUi__SetTexts (UnityEngine_Transform_o* node, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$SetTexts
   void Dino_BusSand_App_UI_GiftPackUi__SetTexts (UnityEngine_Transform_o* node, System_String_o*
   text, const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba6b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba6b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    if ((param_1 == 0) ||
       (lVar4 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (param_1,1,*(undefined8 *)PTR_DAT_04cada48), lVar4 == 0)) {
LAB_022a95f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar5 = *(long **)(lVar4 + 0x20 + lVar6 * 8);
        if (plVar5 == (long *)0x0) goto LAB_022a95f0;
        (**(code **)(*plVar5 + 0x518))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x520));
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
  }
  return;
}


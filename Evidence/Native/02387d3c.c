/* IL2CPP: Dino.BusSand.App.UI.KitToggle$$SetAlpha
void Dino_BusSand_App_UI_KitToggle__SetAlpha (UnityEngine_RectTransform_o* mirror, float a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitToggle$$SetAlpha
   void Dino_BusSand_App_UI_KitToggle__SetAlpha (UnityEngine_RectTransform_o* mirror, float a, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitToggle__SetAlpha_2287d3c(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam0000000004f9c166 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5028);
    bRam0000000004f9c166 = 1;
  }
  if ((param_1 != 0) &&
     (lVar2 = UnityEngine_Component__GetComponentsInChildren_object__26fa290
                        (param_1,*(undefined8 *)PTR_DAT_04cb5028), lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar3 = *(long **)(lVar2 + 0x20 + lVar4 * 8);
        if (plVar3 == (long *)0x0) goto LAB_02387e08;
        (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
        (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
        uVar1 = *(uint *)(lVar2 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar1);
    }
    return;
  }
LAB_02387e08:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


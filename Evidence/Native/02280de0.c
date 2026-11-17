/* IL2CPP: Dino.BusSand.App.UI.KitIdle$$Add
Dino_BusSand_App_UI_KitIdle_o* Dino_BusSand_App_UI_KitIdle__Add (UnityEngine_Component_o* c, int32_t kind, float phase, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitIdle$$Add
   Dino_BusSand_App_UI_KitIdle_o* Dino_BusSand_App_UI_KitIdle__Add (UnityEngine_Component_o* c,
   int32_t kind, float phase, const MethodInfo* method); */

void Dino_BusSand_App_UI_KitIdle__Add_2180de0(undefined4 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  
  if ((bRam0000000004f9b927 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad598);
    bRam0000000004f9b927 = 1;
  }
  if (((param_2 != 0) &&
      (lVar1 = UnityEngine_Component__get_gameObject_43bcde8(param_2,0), lVar1 != 0)) &&
     (lVar1 = UnityEngine_GameObject__AddComponent_object__275a54c
                        (lVar1,*(undefined8 *)PTR_DAT_04cad598), lVar1 != 0)) {
    *(undefined4 *)(lVar1 + 0x20) = param_3;
    *(undefined4 *)(lVar1 + 0x24) = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


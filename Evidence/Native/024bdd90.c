/* IL2CPP: Dino.BusSand.View.MechFx$$Create
Dino_BusSand_View_MechFx_o* Dino_BusSand_View_MechFx__Create (UnityEngine_Transform_o* parent, float worldScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechFx$$Create
   Dino_BusSand_View_MechFx_o* Dino_BusSand_View_MechFx__Create (UnityEngine_Transform_o* parent,
   float worldScale, const MethodInfo* method); */

long Dino_BusSand_View_MechFx__Create_23bdd90(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04cbcf90;
  puVar1 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c9b3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbcf98);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbcf90);
    bRam0000000004f9c9b3 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar3,*(undefined8 *)puVar2,0);
  if ((lVar3 != 0) &&
     (lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0), puVar1 = PTR_DAT_04cbcf98,
     lVar4 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar4,param_2,0,0);
    lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar3,*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x20) = param_1;
      if (cRam0000000004f9ca04 == '\0') {
        FUN_02132f7c(PTR_DAT_04cbcf88);
        cRam0000000004f9ca04 = '\x01';
      }
      puVar1 = PTR_DAT_04cbcf88;
      **(long **)(*(long *)PTR_DAT_04cbcf88 + 0xb8) = lVar3;
      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar3);
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


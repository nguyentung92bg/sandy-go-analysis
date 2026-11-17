/* IL2CPP: Dino.BusSand.View.VehicleBatch$$Create
Dino_BusSand_View_VehicleBatch_o* Dino_BusSand_View_VehicleBatch__Create (UnityEngine_Transform_o* parent, UnityEngine_Camera_o* cam, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$Create
   Dino_BusSand_View_VehicleBatch_o* Dino_BusSand_View_VehicleBatch__Create
   (UnityEngine_Transform_o* parent, UnityEngine_Camera_o* cam, const MethodInfo* method); */

long Dino_BusSand_View_VehicleBatch__Create_23ef7e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar2 = PTR_DAT_04cbdd88;
  puVar1 = PTR_DAT_04caa070;
  if ((bRam0000000004f9cab4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdd90);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    FUN_02132f7c(PTR_DAT_04cbdd88);
    bRam0000000004f9cab4 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar3,*(undefined8 *)puVar2,0);
  if ((lVar3 != 0) &&
     (lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0), puVar1 = PTR_DAT_04cbdd90,
     lVar4 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar4,param_1,0,0);
    lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar3,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_04cbc2c8;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x38) = param_2;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38),param_2);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9cb09 == '\0') {
        FUN_02132f7c(PTR_DAT_04cbc2c8);
        cRam0000000004f9cb09 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar1;
      }
      plVar5 = (long *)(*(long *)(lVar4 + 0xb8) + 8);
      *plVar5 = lVar3;
      thunk_FUN_02134474(plVar5,lVar3);
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


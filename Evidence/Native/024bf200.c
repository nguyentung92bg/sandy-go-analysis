/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Create
Dino_BusSand_View_MechanicLayer_o* Dino_BusSand_View_MechanicLayer__Create (UnityEngine_Transform_o* parent, Dino_BusSand_Core_StageEngine_o* e, Dino_BusSand_View_StageLayout_o* L, System_Func_int__VehicleView__o* vehicle, Dino_BusSand_View_Fx_o* fx, Dino_BusSand_View_MechFx_o* mfx, Dino_BusSand_View_GrainParticles_o* grains, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Create
   Dino_BusSand_View_MechanicLayer_o* Dino_BusSand_View_MechanicLayer__Create
   (UnityEngine_Transform_o* parent, Dino_BusSand_Core_StageEngine_o* e,
   Dino_BusSand_View_StageLayout_o* L, System_Func_int__VehicleView__o* vehicle,
   Dino_BusSand_View_Fx_o* fx, Dino_BusSand_View_MechFx_o* mfx, Dino_BusSand_View_GrainParticles_o*
   grains, const MethodInfo* method); */

long Dino_BusSand_View_MechanicLayer__Create_23bf200
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04cb95d0;
  puVar1 = PTR_DAT_04caa070;
                    /* try { // try from 024bf208 to 025bf3bb has its CatchHandler @ 024bf208
                       catch() { ... } // from try @ 024bf208 with catch @ 024bf208
                       catch() { ... } // from try @ 024bf53c with catch @ 024bf208
                       catch() { ... } // from try @ 024bf614 with catch @ 024bf208
                       catch() { ... } // from try @ 024bf688 with catch @ 024bf208 */
  if ((bRam0000000004f9c9c1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd038);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb95d0);
    bRam0000000004f9c9c1 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar3,*(undefined8 *)puVar2,0);
  if ((lVar3 != 0) &&
     (lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0), puVar1 = PTR_DAT_04cbd038,
     lVar4 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar4,param_1,0,0);
    lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar3,*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x20) = param_2;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x20),param_2);
      *(long *)(lVar3 + 0x28) = param_3;
      thunk_FUN_02134474((long *)(lVar3 + 0x28),param_3);
      *(undefined8 *)(lVar3 + 0x30) = param_4;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30),param_4);
      *(undefined8 *)(lVar3 + 0x38) = param_5;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38),param_5);
      *(undefined8 *)(lVar3 + 0x40) = param_6;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x40),param_6);
      *(undefined8 *)(lVar3 + 0x48) = param_7;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x48),param_7);
      if (param_3 != 0) {
        *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(param_3 + 0xfc);
        Dino_BusSand_View_MechanicLayer__Build_23bf368(lVar3);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


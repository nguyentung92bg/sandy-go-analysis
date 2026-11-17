/* IL2CPP: Dino.BusSand.App.GameApp$$HomeCamera
UnityEngine_Camera_o* Dino_BusSand_App_GameApp__HomeCamera (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.GameApp$$HomeCamera
   UnityEngine_Camera_o* Dino_BusSand_App_GameApp__HomeCamera (Dino_BusSand_App_GameApp_o* __this,
   const MethodInfo* method); */

long Dino_BusSand_App_GameApp__HomeCamera_2169884(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b878 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac840);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac848);
    bRam0000000004f9b878 = 1;
  }
  plVar5 = (long *)(param_1 + 0x90);
  lVar6 = *plVar5;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  puVar1 = PTR_DAT_04cac848;
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 0226990c to 02369913 has its CatchHandler @ 02269a8c */
                    /* try { // try from 0226991c to 02369927 has its CatchHandler @ 02269a50 */
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c20cc(lVar6,*(undefined8 *)puVar1,0);
    if (lVar6 != 0) {
      lVar3 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
      uVar4 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      if (lVar3 != 0) {
                    /* try { // try from 02269958 to 02369963 has its CatchHandler @ 02269a4c */
        UnityEngine_Transform__SetParent_43d1e34(lVar3,uVar4,0,0);
        lVar3 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
        if (lVar3 != 0) {
          UnityEngine_Transform__set_position_43d0f1c(0,_UNK_00e20168,0,lVar3,0);
          lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar6,*(undefined8 *)PTR_DAT_04cac840);
          *plVar5 = lVar6;
          thunk_FUN_02134474(plVar5,lVar6);
                    /* try { // try from 022699b8 to 023699bb has its CatchHandler @ 02269b08 */
          if (*plVar5 != 0) {
            UnityEngine_Camera__set_clearFlags_4358bd4(*plVar5,2,0);
            if (*plVar5 != 0) {
              UnityEngine_Camera__set_backgroundColor_4358a4c
                        (_UNK_00e20324,_UNK_00e205e8,_UNK_00e2038c,0x3f800000,*plVar5,0);
              if (*plVar5 != 0) {
                UnityEngine_Camera__set_cullingMask_435768c(*plVar5,0,0);
                    /* try { // try from 02269a10 to 02369a27 has its CatchHandler @ 02269a8c */
                if (*plVar5 != 0) {
                  UnityEngine_Camera__set_depth_43571ec(0xc1200000,*plVar5,0);
                  goto LAB_02269a20;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02269a20:
  return *plVar5;
}


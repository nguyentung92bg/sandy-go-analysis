/* IL2CPP: Dino.BusSand.App.Fx$$Play
UnityEngine_GameObject_o* Dino_BusSand_App_Fx__Play (System_String_o* key, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, float scale, float minLife, UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Fx$$Play
   UnityEngine_GameObject_o* Dino_BusSand_App_Fx__Play (System_String_o* key, UnityEngine_Vector3_o
   pos, UnityEngine_Quaternion_o rot, float scale, float minLife, UnityEngine_Transform_o* parent,
   const MethodInfo* method); */

long Dino_BusSand_App_Fx__Play_21506bc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
               undefined8 param_9,ulong param_10)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float extraout_s0;
  float in_stack_00000000;
  
  puVar3 = PTR_DAT_04cab448;
  if ((bRam0000000004f9b7bd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab448);
                    /* try { // try from 02250720 to 02350727 has its CatchHandler @ 02250b78 */
    FUN_02132f7c(PTR_DAT_04cab460);
    FUN_02132f7c(PTR_DAT_04cab468);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 02250744 to 023507a7 has its CatchHandler @ 02250b98 */
    bRam0000000004f9b7bd = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Fx__Acquire_21509ac(param_9);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  uVar6 = 0;
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  if (lVar4 != 0) {
    lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar9);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(param_10,0,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_Fx__get_Root_2150538();
      param_10 = uVar6;
    }
    if (lVar8 != 0) {
                    /* try { // try from 022507fc to 0235085f has its CatchHandler @ 02250ba0 */
      UnityEngine_Transform__SetParent_43d1e34(lVar8,param_10,0,0);
      UnityEngine_Transform__SetPositionAndRotation_43d2064
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,lVar8,0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      lVar9 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      UnityEngine_Transform__set_localScale_43d1be0
                (*(float *)(lVar9 + 0xc) * param_8,*(float *)(lVar9 + 0x10) * param_8,
                 *(float *)(lVar9 + 0x14) * param_8,lVar8,0);
      UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar12 = (float)Dino_BusSand_App_Fx__Restart_2150b94(lVar4);
                    /* try { // try from 022508b4 to 02350917 has its CatchHandler @ 02250b90 */
      lVar9 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab468);
      uVar6 = System_Object___ctor_4870e5c(lVar8,0);
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x10) = lVar4;
        thunk_FUN_02134474((long *)(lVar8 + 0x10),lVar4);
        *(undefined8 *)(lVar8 + 0x18) = param_9;
        thunk_FUN_02134474((undefined8 *)(lVar8 + 0x18),param_9);
        uVar6 = UnityEngine_Time__get_time_43cd540(0);
        if (in_stack_00000000 <= fVar12) {
          in_stack_00000000 = fVar12;
        }
        *(float *)(lVar8 + 0x20) = in_stack_00000000 + extraout_s0;
        if (lVar9 != 0) {
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar11 = *(long *)PTR_DAT_04cab460;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = lVar8;
              thunk_FUN_02134474(plVar7,lVar8);
              return lVar4;
            }
                    /* try { // try from 0225096c to 023509cf has its CatchHandler @ 02250b94 */
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar9,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            return lVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar6);
}


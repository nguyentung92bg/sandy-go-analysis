/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Prop
UnityEngine_Transform_o* Dino_BusSand_View_MechanicLayer__Prop (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, UnityEngine_Vector3_o scaleCells, UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Prop
   UnityEngine_Transform_o* Dino_BusSand_View_MechanicLayer__Prop
   (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Vector3_o pos,
   UnityEngine_Quaternion_o rot, UnityEngine_Vector3_o scaleCells, UnityEngine_Transform_o* parent,
   System_String_o* name, const MethodInfo* method); */

long Dino_BusSand_View_MechanicLayer__Prop_23c2534
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c9c3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9c9c3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cbd088;
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(param_10,0,0);
  if ((uVar2 & 1) == 0) {
    param_10 = UnityEngine_Component__get_transform_43bcd18(param_8,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_View_PropKit__Spawn_23dd108(param_10,param_9,param_11,0);
  if ((lVar3 != 0) && (lVar4 = UnityEngine_Component__get_transform_43bcd18(lVar3,0), lVar4 != 0)) {
    UnityEngine_Transform__SetPositionAndRotation_43d2064
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,lVar4,0);
    lVar4 = UnityEngine_Component__get_transform_43bcd18(lVar3,0);
    if (lVar4 != 0) {
      fVar7 = *(float *)(param_8 + 0x50);
      UnityEngine_Transform__set_localScale_43d1be0
                (fStack0000000000000000 * fVar7,fStack0000000000000004 * fVar7,
                 in_stack_00000008 * fVar7,lVar4,0);
      if ((bRam0000000004fa8306 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7648,0);
        FUN_02132f7c(PTR_DAT_04cf5c60);
        bRam0000000004fa8306 = 1;
      }
      puVar1 = PTR_DAT_04cf5c60;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar4 = *(long *)(lVar3 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
      }
      if (pcRam0000000004fa8310 == (code *)0x0) {
        pcRam0000000004fa8310 = (code *)FUN_02132f40(&UNK_00e2fdd4);
      }
      uVar2 = (*pcRam0000000004fa8310)(lVar4);
      lVar3 = *(long *)puVar1;
      if (*(long *)(lVar3 + 0x38) == 0) {
        FUN_0216b4cc(lVar3);
      }
      if (uVar2 != 0) {
        if (cRam0000000004f9d849 == '\0') {
          FUN_02132f7c(&DAT_04ddbd40);
          cRam0000000004f9d849 = '\x01';
        }
        if ((uVar2 & 1) == 0) {
          plVar5 = (long *)System_IntPtr__op_Explicit_487833c();
          lVar4 = *plVar5;
        }
        else {
          lVar4 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar2,0);
        }
        lVar3 = **(long **)(lVar3 + 0x38);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0216b470(lVar3);
        }
        if (lVar4 != 0) {
          lVar6 = thunk_FUN_0216e7a0(lVar4,lVar3);
          if (lVar6 != 0) {
            return lVar6;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(lVar4,lVar3);
        }
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


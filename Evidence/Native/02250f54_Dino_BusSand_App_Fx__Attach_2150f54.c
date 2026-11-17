/* IL2CPP: Dino.BusSand.App.Fx$$Attach
UnityEngine_GameObject_o* Dino_BusSand_App_Fx__Attach (System_String_o* key, UnityEngine_Transform_o* parent, UnityEngine_Vector3_o localPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Fx$$Attach
   UnityEngine_GameObject_o* Dino_BusSand_App_Fx__Attach (System_String_o* key,
   UnityEngine_Transform_o* parent, UnityEngine_Vector3_o localPos, const MethodInfo* method); */

long Dino_BusSand_App_Fx__Attach_2150f54
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  
  puVar2 = PTR_DAT_04cab448;
                    /* catch() { ... } // from try @ 02250f3c with catch @ 02250f60 */
  if ((bRam0000000004f9b7be & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab448);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b7be = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Fx__Acquire_21509ac(param_4);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
  lVar5 = 0;
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (lVar3 != 0) {
    lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
    lVar5 = 0;
    if (lVar6 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(lVar6,param_5,0,0);
      lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
      lVar5 = 0;
      if (lVar6 != 0) {
        UnityEngine_Transform__set_localPosition_43cfda8(param_1,param_2,param_3,lVar6,0);
        lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
        lVar5 = lVar6;
        if (cRam0000000004f9b88b == '\0') {
          lVar5 = FUN_02132f7c(PTR_DAT_04cab4b0);
          cRam0000000004f9b88b = '\x01';
        }
        if (lVar6 != 0) {
          puVar7 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
          UnityEngine_Transform__set_localRotation_43d156c
                    (*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar6,0);
          UnityEngine_GameObject__SetActive_43c1408(lVar3,1,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Fx__Restart_2150b94(lVar3);
          return lVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224(lVar5);
}


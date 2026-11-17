/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$SpawnHead
UnityEngine_Transform_o* Dino_BusSand_App_UI_BattleRoyaleUi__SpawnHead (UnityEngine_Transform_o* _template, UnityEngine_Transform_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$SpawnHead
   UnityEngine_Transform_o* Dino_BusSand_App_UI_BattleRoyaleUi__SpawnHead (UnityEngine_Transform_o*
   _template, UnityEngine_Transform_o* slot, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleUi__SpawnHead_219ccf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba00 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae028);
    bRam0000000004f9ba00 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (param_1 != 0) {
    uVar3 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    lVar4 = UnityEngine_Object__Instantiate_object__2805310
                      (uVar3,param_2,0,*(undefined8 *)PTR_DAT_04cad390);
    if (lVar4 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar4,*(undefined8 *)PTR_DAT_04cae028,0);
      lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      puVar1 = PTR_DAT_04caa208;
      if (lVar5 != 0) {
        puVar7 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
        UnityEngine_Transform__set_localPosition_43cfda8(*puVar7,puVar7[1],puVar7[2],lVar5,0);
        lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
        if (cRam0000000004f9b88b == '\0') {
          FUN_02132f7c(PTR_DAT_04cab4b0);
          cRam0000000004f9b88b = '\x01';
        }
        if (lVar5 != 0) {
          puVar7 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
          UnityEngine_Transform__set_localRotation_43d156c
                    (*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar5,0);
          lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          if (lVar5 != 0) {
            lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
            UnityEngine_Transform__set_localScale_43d1be0
                      (*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                       *(undefined4 *)(lVar8 + 0x14),lVar5,0);
            UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
            if ((bRam0000000004fa835b & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf5bd0,0);
              FUN_02132f7c(PTR_DAT_04cf5c60);
              bRam0000000004fa835b = 1;
            }
            puVar1 = PTR_DAT_04cf5c60;
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar5 = *(long *)(lVar4 + 0x10);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
            }
            if (pcRam0000000004fa8408 == (code *)0x0) {
              pcRam0000000004fa8408 = (code *)FUN_02132f40(&UNK_00e3df31);
            }
            uVar2 = (*pcRam0000000004fa8408)(lVar5);
            lVar4 = *(long *)puVar1;
            if (*(long *)(lVar4 + 0x38) == 0) {
              FUN_0216b4cc(lVar4);
            }
            if (uVar2 != 0) {
              if (cRam0000000004f9d849 == '\0') {
                FUN_02132f7c(&DAT_04ddbd40);
                cRam0000000004f9d849 = '\x01';
              }
              if ((uVar2 & 1) == 0) {
                plVar6 = (long *)System_IntPtr__op_Explicit_487833c();
                lVar5 = *plVar6;
              }
              else {
                lVar5 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar2,0);
              }
              lVar4 = **(long **)(lVar4 + 0x38);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0216b470(lVar4);
              }
              if (lVar5 != 0) {
                lVar8 = thunk_FUN_0216e7a0(lVar5,lVar4);
                if (lVar8 != 0) {
                  return lVar8;
                }
                    /* WARNING: Subroutine does not return */
                FUN_021335a4(lVar5,lVar4);
              }
            }
            return 0;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


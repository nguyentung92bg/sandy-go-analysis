/* IL2CPP: Dino.BusSand.AudioHub$$LoopVoiceOf
Dino_BusSand_AudioHub_LoopVoice_o* Dino_BusSand_AudioHub__LoopVoiceOf (Dino_BusSand_AudioHub_o* __this, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$LoopVoiceOf
   Dino_BusSand_AudioHub_LoopVoice_o* Dino_BusSand_AudioHub__LoopVoiceOf (Dino_BusSand_AudioHub_o*
   __this, System_String_o* id, const MethodInfo* method); */

long Dino_BusSand_AudioHub__LoopVoiceOf_23768b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  long lStack_58;
  ulong uStack_38;
  
  if ((bRam0000000004f9c7f6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cbb2c8);
    FUN_02132f7c(PTR_DAT_04cbb120);
    FUN_02132f7c(PTR_DAT_04cbb2d0);
    FUN_02132f7c(PTR_DAT_04cb1840);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb1848);
    FUN_02132f7c(PTR_DAT_04cb1850);
    FUN_02132f7c(PTR_DAT_04cbb2d8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb2e0);
    bRam0000000004f9c7f6 = 1;
  }
  uStack_38 = 0;
  lStack_58 = 0;
  uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar3 = Dino_BusSand_AudioHub__Key_23746fc(param_1,param_2);
  uVar2 = uVar3;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (*(long *)(param_1 + 0x70),uVar3,&uStack_38,*(undefined8 *)PTR_DAT_04cbb2c8);
    if ((uVar2 & 1) != 0) {
      return uStack_38;
    }
    uVar2 = 0;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (*(long *)(param_1 + 0x28),uVar3,&lStack_58,*(undefined8 *)PTR_DAT_04cbb120)
      ;
      puVar1 = PTR_DAT_04cb1850;
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (lStack_58 != 0) {
        lVar4 = *(long *)(lStack_58 + 0x80);
        if (lVar4 == 0) {
          return 0;
        }
        if (*(int *)(lVar4 + 0x18) == 0) {
          return 0;
        }
        lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar4,0,*(undefined8 *)PTR_DAT_04cb1850);
        uVar2 = 0;
        if (lVar4 != 0) {
          uVar5 = Dino_BusSand_AudioHub__Clip_23742fc(param_1,*(undefined8 *)(lVar4 + 0x10));
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
          }
          uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
          uVar2 = 0;
          if ((uVar6 & 1) != 0) {
            return 0;
          }
          if (lStack_58 != 0) {
            uVar7 = System_String__Concat_46c82e0
                              (*(undefined8 *)PTR_DAT_04cbb2e0,*(undefined8 *)(lStack_58 + 0x10),0);
            lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
            uVar2 = UnityEngine_GameObject___ctor_43c20cc(lVar4,uVar7,0);
            if (lVar4 != 0) {
              lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
              uVar2 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
              if (lVar8 != 0) {
                UnityEngine_Transform__SetParent_43d1e34(lVar8,uVar2,0,0);
                lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar4,*(undefined8 *)PTR_DAT_04cb1840);
                uVar2 = 0;
                if (lVar4 != 0) {
                  UnityEngine_AudioSource__set_playOnAwake_4348c54(lVar4,0,0);
                  UnityEngine_AudioSource__set_loop_4348b90(lVar4,1,0);
                  UnityEngine_AudioSource__set_volume_434840c(0,lVar4,0);
                  UnityEngine_AudioSource__set_clip_434875c(lVar4,uVar5,0);
                  UnityEngine_AudioSource__set_priority_4348ec0(lVar4,0x40,0);
                  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb2d8);
                  uVar2 = System_Object___ctor_4870e5c(uVar6,0);
                  if (uVar6 != 0) {
                    *(long *)(uVar6 + 0x10) = lVar4;
                    thunk_FUN_02134474((long *)(uVar6 + 0x10),lVar4);
                    *(long *)(uVar6 + 0x18) = lStack_58;
                    uVar2 = thunk_FUN_02134474();
                    if (lStack_58 != 0) {
                      uVar2 = 0;
                      if (*(long *)(lStack_58 + 0x80) != 0) {
                        fVar10 = *(float *)(lStack_58 + 0x38);
                        lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                                          (*(long *)(lStack_58 + 0x80),0,*(undefined8 *)puVar1);
                        uVar2 = 0;
                        if (lVar4 != 0) {
                          fVar11 = *(float *)(lVar4 + 0x20);
                          if (*(int *)(*(long *)PTR_DAT_04cab1f0 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab1f0);
                          }
                          uVar9 = func_0x049b5300(0x41200000,(fVar10 + fVar11) / 20.0);
                          lVar4 = *(long *)(param_1 + 0x70);
                          *(undefined4 *)(uVar6 + 0x20) = uVar9;
                          uVar2 = 0;
                          uStack_38 = uVar6;
                          if (lVar4 != 0) {
                            System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                                      (lVar4,uVar3,uVar6,*(undefined8 *)PTR_DAT_04cbb2d0);
                            return uStack_38;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar2);
}


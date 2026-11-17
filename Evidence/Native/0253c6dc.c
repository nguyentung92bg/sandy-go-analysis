/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap.<>c$$<Install>b__7_1
void Dino_BusSand_Sdk_SdkBootstrap___c___Install_b__7_1 (Dino_BusSand_Sdk_SdkBootstrap___c_o* __this, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x044300d4) */
/* WARNING: Removing unreachable block (ram,0x044300e4) */
/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap.<>c$$<Install>b__7_1
   void Dino_BusSand_Sdk_SdkBootstrap___c___Install_b__7_1 (Dino_BusSand_Sdk_SdkBootstrap___c_o*
   __this, System_Action_o* done, const MethodInfo* method); */

void Dino_BusSand_Sdk_SdkBootstrap___c___Install_b__7_1_243c6dc
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_5c [4];
  undefined1 *puStack_58;
  ulong uStack_50;
  long lStack_48;
  
  puVar2 = PTR_DAT_04cbf570;
  if ((bRam0000000004f9cc7b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf578);
    FUN_02132f7c(PTR_DAT_04cbf580);
    FUN_02132f7c(PTR_DAT_04cbf570);
    bRam0000000004f9cc7b = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar3,0);
  puVar1 = PTR_DAT_04cbf580;
  puVar2 = PTR_DAT_04cbf578;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar3 + 0x10),param_2);
    lVar4 = MaxSdkBase__get_CmpService_3bc3338(0);
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action_object____ctor_35f0008(uVar5,lVar3,*(undefined8 *)puVar1,0);
    puVar2 = PTR_DAT_04cc9e28;
    if (lVar4 != 0) {
      if ((bRam0000000004fa087e & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9d18,uVar5,0);
        FUN_02132f7c(PTR_DAT_04cc9e28);
        FUN_02132f7c(PTR_DAT_04cc9e30);
        bRam0000000004fa087e = 1;
      }
      puVar1 = PTR_DAT_04ca9d18;
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      puVar6 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
      *puVar6 = uVar5;
      thunk_FUN_02134474(puVar6,uVar5);
      lVar7 = *(long *)puVar1;
      lVar3 = *(long *)(lVar7 + 0x38);
      lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      if (lVar3 == 0) {
        FUN_0216b4cc(lVar7);
        lVar3 = *(long *)(lVar7 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0216b470();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0216b470();
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar3 = **(long **)(lVar3 + 0xb8);
      if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(lVar4,*(undefined8 *)PTR_DAT_04cc9e30,lVar3,0);
      }
      uVar5 = UnityEngine_AndroidJNIHelper__GetMethodID_43202b8
                        (*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x18),
                         *(undefined8 *)PTR_DAT_04cc9e30,lVar3,1);
      lVar7 = tpidr_el0;
      lStack_48 = *(long *)(lVar7 + 0x28);
      if ((bRam0000000004fa4b9b & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5840);
        FUN_02132f7c(PTR_DAT_04cc3f80);
        FUN_02132f7c(PTR_DAT_04cc3f88);
        bRam0000000004fa4b9b = 1;
      }
      puStack_58 = (undefined1 *)0x0;
      uStack_50 = 0;
      auStack_5c[0] = 0;
      if ((lVar3 == 0) || (uVar9 = *(ulong *)(lVar3 + 0x18), uVar9 == 0)) {
        puVar8 = (undefined1 *)0x0;
        puStack_58 = (undefined1 *)0x0;
        uStack_50 = 0;
      }
      else {
        if ((uVar9 & 0xffffffff) == 0) {
          puVar8 = (undefined1 *)0x0;
        }
        else {
          puVar8 = auStack_80 +
                   -((-(uVar9 >> 0x1f & 1) & 0xfffffff800000000 | (uVar9 & 0xffffffff) << 3) + 0xf &
                    0xfffffffffffffff0);
        }
        func_0x049b52e0(puVar8,0);
        if ((int)uVar9 < 0) {
          System_ThrowHelper__ThrowArgumentOutOfRangeException_484fde4(0);
          uStack_50 = uVar9 & 0xffffffff;
          puStack_58 = puVar8;
        }
        else {
          uStack_50 = uVar9 & 0xffffffff;
          puStack_58 = puVar8;
          if ((int)uVar9 != 0) {
            UnityEngine_AndroidJNISafe__PushLocalFrame_4329788(uVar9 & 0xffffffff);
            UnityEngine_AndroidJNIHelper__CreateJNIArgArray_431fe54(lVar3,puVar8,uStack_50);
          }
        }
      }
      ppuStack_70 = &puStack_58;
      uStack_78 = 0;
      puStack_68 = auStack_5c;
      if (*(long *)(lVar4 + 0x18) == 0) {
        if (*(long *)(lVar7 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      else {
        UnityEngine_AndroidJNISafe__CallStaticVoidMethod_432a5e8
                  (*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x18),uVar5,puVar8,uStack_50);
        auStack_5c[0] = 0 < (int)uStack_50;
        if (0 < (int)uStack_50) {
          if (pcRam0000000004fa45f0 == (code *)0x0) {
            pcRam0000000004fa45f0 = (code *)FUN_02132f40(&UNK_00e2e779);
          }
          (*pcRam0000000004fa45f0)(0);
        }
        if (*(long *)(lVar7 + 0x28) == lStack_48) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


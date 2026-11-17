/* IL2CPP: Dino.BusSand.App.GameApp$$BeforeFullscreenAd
void Dino_BusSand_App_GameApp__BeforeFullscreenAd (Dino_BusSand_App_GameApp_o* __this, System_String_o* what, Dino_BusSand_App_DeviceMemory_Snapshot_o mem, System_Action_o* show, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$BeforeFullscreenAd
   void Dino_BusSand_App_GameApp__BeforeFullscreenAd (Dino_BusSand_App_GameApp_o* __this,
   System_String_o* what, Dino_BusSand_App_DeviceMemory_Snapshot_o mem, System_Action_o* show, const
   MethodInfo* method); */

void Dino_BusSand_App_GameApp__BeforeFullscreenAd_21650ac
               (long param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  puVar1 = PTR_DAT_04caba50;
  if ((bRam0000000004f9b854 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9b854 = 1;
  }
  fVar7 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar6 = *(long *)(lVar2 + 0xb8);
  if ((((*(char *)(lVar6 + 0x18) != '\0') && (-1 < (long)*param_3)) && (0 < (long)param_3[1])) &&
     ((((param_3[3] & 1) != 0 || (*param_3 < 400)) || (param_3[1] < 0xc80)))) {
    fVar9 = *(float *)(param_1 + 0x68);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
      lVar6 = *(long *)(lVar2 + 0xb8);
    }
    fVar8 = *(float *)(lVar6 + 0x1c);
    if (fVar8 <= fVar7 - fVar9) {
      fVar9 = *(float *)(param_1 + 100);
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        fVar8 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c);
      }
      if ((fVar8 <= fVar7 - fVar9) &&
         (uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0), (uVar3 & 1) != 0
         )) {
        *(float *)(param_1 + 0x68) = fVar7;
        uStack_68 = param_3[1];
        uStack_70 = *param_3;
        uStack_58 = param_3[3];
        uStack_60 = param_3[2];
        lVar2 = Dino_BusSand_App_GameApp__ReleaseThenShow_216522c
                          (param_1,param_2,&uStack_70,param_4);
        if (lVar2 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar4 = thunk_FUN_0216e89c();
          uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar4,uVar5,0);
        }
        else {
          uVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar3 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (param_1 != 0) {
              lVar6 = *(long *)(param_1 + 0x10);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
              }
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar6,lVar2);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar4 = thunk_FUN_0216e89c();
          uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar4,uVar5,0);
        }
        uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar4,uVar5);
      }
    }
  }
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02265224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x18))(*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


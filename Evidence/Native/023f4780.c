/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$MatchEyes
void Dino_BusSand_App_UI_HomeToonRig__MatchEyes (Dino_BusSand_App_UI_HomeToonRig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$MatchEyes
   void Dino_BusSand_App_UI_HomeToonRig__MatchEyes (Dino_BusSand_App_UI_HomeToonRig_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonRig__MatchEyes_22f4780(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c47a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c47a = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_1 + 0x38) != 0) {
        UnityEngine_Material__CopyPropertiesFromMaterial_437eef0
                  (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),0);
        puVar3 = PTR_DAT_04cb71b0;
        lVar5 = *(long *)(param_1 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = _UNK_00e20054;
        if (lVar5 != 0) {
          uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 100);
          if ((bRam0000000004fa6d88 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf6620,uVar1,0);
            FUN_02132f7c(PTR_DAT_04cab588);
            bRam0000000004fa6d88 = 1;
          }
          if (lVar5 != 0) {
            lVar7 = *(long *)(lVar5 + 0x10);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
            }
            if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (pcRam0000000004fa6f68 == (code *)0x0) {
              pcRam0000000004fa6f68 = (code *)FUN_02132f40(&UNK_00e40218);
            }
                    /* WARNING: Could not recover jumptable at 0x0447fb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa6f68)(uVar2,lVar7,uVar1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}


/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$Place
void Dino_BusSand_View_EndSuctionCue__Place (Dino_BusSand_View_EndSuctionCue_o* __this, float rows, float a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$Place
   void Dino_BusSand_View_EndSuctionCue__Place (Dino_BusSand_View_EndSuctionCue_o* __this, float
   rows, float a, const MethodInfo* method); */

void Dino_BusSand_View_EndSuctionCue__Place_2396074(float param_1,float param_2,long param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  
  if ((bRam0000000004f9c8df & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc148);
    bRam0000000004f9c8df = 1;
  }
  puVar2 = PTR_DAT_04cbc148;
  if (*(long *)(param_3 + 0x20) != 0) {
    uVar3 = UnityEngine_GameObject__get_transform_43c1048(*(long *)(param_3 + 0x20),0);
                    /* try { // try from 024960c4 to 025961cb has its CatchHandler @ 024960c4
                       catch() { ... } // from try @ 024960c4 with catch @ 024960c4
                       catch() { ... } // from try @ 024961d4 with catch @ 024960c4
                       catch() { ... } // from try @ 02496970 with catch @ 024960c4
                       catch() { ... } // from try @ 02496a24 with catch @ 024960c4
                       catch() { ... } // from try @ 02496a54 with catch @ 024960c4
                       catch() { ... } // from try @ 02496adc with catch @ 024960c4
                       catch() { ... } // from try @ 02496b40 with catch @ 024960c4 */
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
      lVar4 = *(long *)puVar2;
    }
    Dino_BusSand_View_EndSuctionCue__Put_2396440
              (param_1 - *(float *)(*(long *)(lVar4 + 0xb8) + 0xc),
               *(float *)(*(long *)(lVar4 + 0xb8) + 4) * _UNK_00e20660,_UNK_00e20178,param_3,uVar3);
    if (*(long *)(param_3 + 0x18) != 0) {
      uVar3 = UnityEngine_GameObject__get_transform_43c1048(*(long *)(param_3 + 0x18),0);
      Dino_BusSand_View_EndSuctionCue__Put_2396440
                (param_1,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0x3fc00000,param_3,
                 uVar3);
      if (*(long *)(param_3 + 0x30) != 0) {
        lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
        UnityEngine_Material__SetColor_437bcac
                  (*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                   *(undefined4 *)(lVar4 + 0x20),*(float *)(lVar4 + 8) * param_2,
                   *(long *)(param_3 + 0x30),*(undefined4 *)(lVar4 + 0x38),0);
        lVar4 = *(long *)(param_3 + 0x28);
        if (lVar4 != 0) {
          fVar1 = (*(float **)(*(long *)puVar2 + 0xb8))[0xe];
          fStack_34 = **(float **)(*(long *)puVar2 + 0xb8) * param_2;
          uStack_40 = 0x3f800000;
          uStack_3c = 0x3f800000;
          uStack_38 = 0x3f800000;
          if ((bRam0000000004fa6d89 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf6620,fVar1,0);
            FUN_02132f7c(PTR_DAT_04cab588);
            bRam0000000004fa6d89 = 1;
          }
          if (lVar4 != 0) {
            lVar5 = *(long *)(lVar4 + 0x10);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
            }
            if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (pcRam0000000004fa6f70 == (code *)0x0) {
              pcRam0000000004fa6f70 = (code *)FUN_02132f40(&UNK_00e48b6d);
            }
            (*pcRam0000000004fa6f70)(lVar5,fVar1,&uStack_40);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


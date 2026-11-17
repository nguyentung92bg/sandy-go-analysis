/* IL2CPP: Dino.BusSand.View.GrainParticles$$.cctor
void Dino_BusSand_View_GrainParticles___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GrainParticles$$.cctor
   void Dino_BusSand_View_GrainParticles___cctor (const MethodInfo* method); */

void Dino_BusSand_View_GrainParticles___cctor_23b6ee0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = PTR_DAT_04cbc9d0;
  if ((bRam0000000004f9c988 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc358);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cbc9d0);
    bRam0000000004f9c988 = 1;
  }
  lVar4 = FUN_02133068(*(undefined8 *)puVar3,5);
  uStack_30 = 0;
  uStack_28 = 0;
  UnityEngine_Rendering_VertexAttributeDescriptor___ctor_43df7f4(&uStack_30,0,0,3,0,0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = uStack_28;
      *(undefined8 *)(lVar4 + 0x20) = uStack_30;
      uStack_40 = 0;
      uStack_38 = 0;
      UnityEngine_Rendering_VertexAttributeDescriptor___ctor_43df7f4(&uStack_40,4,0,4,0,0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x38) = uStack_38;
        *(undefined8 *)(lVar4 + 0x30) = uStack_40;
        uStack_50 = 0;
        uStack_48 = 0;
        UnityEngine_Rendering_VertexAttributeDescriptor___ctor_43df7f4(&uStack_50,5,0,4,0,0);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x48) = uStack_48;
          *(undefined8 *)(lVar4 + 0x40) = uStack_50;
          uStack_60 = 0;
          uStack_58 = 0;
          UnityEngine_Rendering_VertexAttributeDescriptor___ctor_43df7f4(&uStack_60,6,0,4,0,0);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x58) = uStack_58;
            *(undefined8 *)(lVar4 + 0x50) = uStack_60;
            uStack_70 = 0;
            uStack_68 = 0;
            UnityEngine_Rendering_VertexAttributeDescriptor___ctor_43df7f4(&uStack_70,7,0,4,0,0);
            puVar3 = PTR_DAT_04cbc358;
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x68) = uStack_68;
              *(undefined8 *)(lVar4 + 0x60) = uStack_70;
              **(long **)(*(long *)puVar3 + 0xb8) = lVar4;
              puVar2 = PTR_DAT_04caed88;
              thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar4);
              lVar4 = FUN_02133068(*(undefined8 *)puVar2,4);
              if (lVar4 == 0) goto LAB_024b70ec;
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 != 0) {
                uVar5 = NEON_fmov(0xbf800000,4);
                *(undefined8 *)(lVar4 + 0x20) = uVar5;
                if (uVar1 != 1) {
                  *(undefined8 *)(lVar4 + 0x28) = _UNK_00e6a3b8;
                  if (2 < uVar1) {
                    uVar5 = NEON_fmov(0x3f800000,4);
                    *(undefined8 *)(lVar4 + 0x30) = uVar5;
                    if (uVar1 != 3) {
                      *(undefined8 *)(lVar4 + 0x38) = _UNK_00e6a0c0;
                      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar4;
                      thunk_FUN_02134474();
                      return;
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
    FUN_0213322c();
  }
LAB_024b70ec:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


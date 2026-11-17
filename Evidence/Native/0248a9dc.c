/* IL2CPP: Dino.BusSand.RenderQuality$$OnEndCamera
void Dino_BusSand_RenderQuality__OnEndCamera (UnityEngine_Rendering_ScriptableRenderContext_o ctx, UnityEngine_Camera_o* cam, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$OnEndCamera
   void Dino_BusSand_RenderQuality__OnEndCamera (UnityEngine_Rendering_ScriptableRenderContext_o
   ctx, UnityEngine_Camera_o* cam, const MethodInfo* method); */

void Dino_BusSand_RenderQuality__OnEndCamera_238a9dc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar3 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9c895 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbd60);
    FUN_02132f7c(PTR_DAT_04cbbd68);
    FUN_02132f7c(PTR_DAT_04cbbd70);
    FUN_02132f7c(PTR_DAT_04cbbd98);
    FUN_02132f7c(PTR_DAT_04cbbd88);
    FUN_02132f7c(PTR_DAT_04cbbda0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    bRam0000000004f9c895 = 1;
  }
  lVar6 = *(long *)puVar3;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
        if (lVar8 == 0) goto LAB_0248aba4;
      }
      puVar5 = PTR_DAT_04cbbd68;
      puVar4 = PTR_DAT_04cbbd60;
      puVar2 = PTR_DAT_04ca9ae8;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_58,lVar8,*(undefined8 *)PTR_DAT_04cbbd88);
      while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_58,*(undefined8 *)puVar5), lVar6 = lStack_48,
            (uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar7 & 1) != 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          *(undefined1 *)(lVar6 + 0x18) = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_58,*(undefined8 *)puVar4);
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar3;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
      if (lVar6 == 0) goto LAB_0248aba4;
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
    }
    return;
  }
LAB_0248aba4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


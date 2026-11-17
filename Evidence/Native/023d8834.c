/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$OnDrag
void Dino_BusSand_App_UI_HomeAtelier__OnDrag (Dino_BusSand_App_UI_HomeAtelier_o* __this, UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$OnDrag
   void Dino_BusSand_App_UI_HomeAtelier__OnDrag (Dino_BusSand_App_UI_HomeAtelier_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__OnDrag_22d8834
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9c3d8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6eb0);
    FUN_02132f7c(PTR_DAT_04cb6eb8);
    FUN_02132f7c(PTR_DAT_04cb6ec0);
    FUN_02132f7c(PTR_DAT_04cb6ec8);
    FUN_02132f7c(PTR_DAT_04cb6ed0);
    bRam0000000004f9c3d8 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (*(char *)(param_4 + 200) == '\0') {
    return;
  }
  if (*(long *)(param_4 + 0x20) != 0) {
    UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_4 + 0x20),0);
    iVar3 = UnityEngine_Screen__get_width_436a6a0(0);
    fVar6 = 1.0;
    if (1.0 <= (float)iVar3) {
      fVar6 = (float)iVar3;
    }
    if (param_5 != 0) {
      fVar9 = *(float *)(param_4 + 0xc4) + (param_3 / fVar6) * *(float *)(param_5 + 0x10c);
      fVar8 = (float)(*(int *)(param_4 + 0x58) + -1);
      *(float *)(param_4 + 0xc4) = fVar9;
      fVar7 = *(float *)(param_4 + 0xc0) + fVar9 / *(float *)(param_4 + 0x6c);
      fVar9 = 0.0;
      if (0.0 <= fVar8) {
        fVar9 = fVar8;
      }
      if (0.0 <= fVar7) {
        if (fVar9 < fVar7) {
          fVar7 = fVar9 + (fVar7 - fVar9) * _UNK_00e207cc;
        }
      }
      else {
        fVar7 = fVar7 * _UNK_00e207cc;
      }
      *(float *)(param_4 + 0xb0) = fVar7;
      if ((*(long *)(param_4 + 0x78) != 0) &&
         (lVar4 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                            (*(long *)(param_4 + 0x78),*(undefined8 *)PTR_DAT_04cb6eb0),
         puVar2 = PTR_DAT_04cb6ec0, puVar1 = PTR_DAT_04cb6eb8, lVar4 != 0)) {
        System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
                  (&uStack_58,lVar4,*(undefined8 *)PTR_DAT_04cb6ed0);
        fVar9 = _UNK_00e20904;
        while( true ) {
          uVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                            (&uStack_58,*(undefined8 *)puVar2);
          if ((uVar5 & 1) == 0) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
                      (&uStack_58,*(undefined8 *)puVar1);
            *(undefined4 *)(param_4 + 0xbc) = *(undefined4 *)(param_4 + 0xec);
            return;
          }
          if (lStack_48 == 0) break;
          *(float *)(lStack_48 + 0x74) =
               *(float *)(lStack_48 + 0x74) +
               (param_3 / fVar6) * *(float *)(param_5 + 0x10c) * fVar9;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


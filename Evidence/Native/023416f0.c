/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$Each
void Dino_BusSand_App_Meta_LiveOps__Each (System_Action_ILiveFeature__o* a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$Each
   void Dino_BusSand_App_Meta_LiveOps__Each (System_Action_ILiveFeature__o* a, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_LiveOps__Each_22416f0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  
  puVar2 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bf05 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb37e8);
    FUN_02132f7c(PTR_DAT_04cb3840);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bf05 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  plVar7 = *(long **)(lVar4 + 0xb8);
  if ((char)plVar7[1] != '\0') {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      plVar7 = *(long **)(*(long *)puVar2 + 0xb8);
    }
    if ((*plVar7 == 0) ||
       (lVar4 = System_Collections_Generic_List_object___ToArray_3a83728
                          (*plVar7,*(undefined8 *)PTR_DAT_04cb3840), puVar3 = PTR_DAT_04cb37e8,
       puVar2 = PTR_DAT_04cac458, lVar4 == 0)) {
LAB_02341914:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar7 = *(long **)(lVar4 + (long)(int)uVar11 * 8 + 0x20);
        if (plVar7 == (long *)0x0) goto LAB_02341914;
        lVar8 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02341838;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar3,0);
LAB_02341838:
        uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar9 = Dino_BusSand_App_Meta_FeatureGate__AllowsLiveFeature_220bdf0(uVar6,0);
        if ((uVar9 & 1) != 0) {
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          (**(code **)(param_1 + 0x18))
                    (*(undefined8 *)(param_1 + 0x40),plVar7,*(undefined8 *)(param_1 + 0x28));
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar1);
    }
  }
  return;
}


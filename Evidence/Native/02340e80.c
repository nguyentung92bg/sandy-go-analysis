/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$RegisterAll
void Dino_BusSand_App_Meta_LiveOps__RegisterAll (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$RegisterAll
   void Dino_BusSand_App_Meta_LiveOps__RegisterAll (const MethodInfo* method); */

void Dino_BusSand_App_Meta_LiveOps__RegisterAll_2240e80(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  
  puVar3 = PTR_DAT_04cb37d0;
  if ((bRam0000000004f9bf02 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37d8);
    FUN_02132f7c(PTR_DAT_04cb37e0);
    FUN_02132f7c(PTR_DAT_04cb37e8);
    FUN_02132f7c(PTR_DAT_04cb37d0);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bf02 = 1;
  }
  puVar2 = PTR_DAT_04ca9ac8;
  uVar11 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar7 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar11,0);
  if (((plVar7 != (long *)0x0) &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x308))(plVar7,*(undefined8 *)(*plVar7 + 0x310)),
      plVar7 != (long *)0x0)) &&
     (lVar8 = (**(code **)(*plVar7 + 0x248))(plVar7,*(undefined8 *)(*plVar7 + 0x250)),
     puVar6 = PTR_DAT_04cb37e8, puVar5 = PTR_DAT_04cb37e0, puVar4 = PTR_DAT_04cb37d8,
     puVar3 = PTR_DAT_04cac668, lVar8 != 0)) {
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar13 = 0;
      do {
        if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar12 = *(long *)(lVar8 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_02341128;
        uVar9 = System_Type__get_IsAbstract_48499f0(lVar12,0);
        if (((uVar9 & 1) == 0) &&
           (uVar9 = System_Type__get_IsInterface_4848d4c(lVar12,0), (uVar9 & 1) == 0)) {
          uVar11 = *(undefined8 *)puVar5;
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          plVar7 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar11,0);
          if (plVar7 == (long *)0x0) goto LAB_02341128;
          uVar9 = (**(code **)(*plVar7 + 0x2b8))(plVar7,lVar12,*(undefined8 *)(*plVar7 + 0x2c0));
          if ((uVar9 & 1) != 0) {
            lVar10 = *(long *)(puVar2 + 0xe0);
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar10 = *(long *)(puVar2 + 0xe0);
            }
            uVar11 = System_Type__GetConstructor_4849d14
                               (lVar12,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            uVar9 = System_Reflection_ConstructorInfo__op_Equality_4772914(uVar11,0,0);
            if ((uVar9 & 1) == 0) {
              lVar12 = System_Activator__CreateInstance_4857b30(lVar12,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (lVar12 == 0) {
                lVar10 = 0;
              }
              else {
                uVar11 = *(undefined8 *)puVar6;
                lVar10 = thunk_FUN_0216e7a0(lVar12,uVar11);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021335a4(lVar12,uVar11);
                }
              }
              Dino_BusSand_App_Meta_LiveOps__Register_2241168(lVar10);
            }
          }
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar1);
    }
    return;
  }
LAB_02341128:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


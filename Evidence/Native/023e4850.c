/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Blow
void Dino_BusSand_App_UI_HomeBus__Blow (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Blow
   void Dino_BusSand_App_UI_HomeBus__Blow (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_HomeBus__Blow_22e4850(long param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  
  if ((bRam0000000004f9c41b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7200);
    bRam0000000004f9c41b = 1;
  }
  puVar11 = PTR_DAT_04cb7200;
  fVar10 = _UNK_00e2098c;
  fVar9 = _UNK_00e207cc;
  fVar8 = _UNK_00e20754;
  fVar7 = _UNK_00e2043c;
  fVar6 = _UNK_00e202d8;
  fVar5 = _UNK_00e1fea8;
  iVar14 = 7;
  while (plVar12 = *(long **)(param_1 + 0x30), plVar12 != (long *)0x0) {
    lVar13 = *(long *)(param_1 + 0x10);
    dVar1 = (double)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    plVar12 = *(long **)(param_1 + 0x30);
    if (plVar12 == (long *)0x0) break;
    dVar2 = (double)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    plVar12 = *(long **)(param_1 + 0x30);
    if (plVar12 == (long *)0x0) break;
    dVar3 = (double)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    if (lVar13 == 0) break;
    fVar16 = (float)dVar2 * 0.25 + fVar7;
    fVar17 = (float)dVar3 * 5.0 + -3.5;
    uVar15 = UnityEngine_Transform__TransformPoint_43d3c44
                       ((float)dVar1 * 12.0 + -9.0,fVar16,lVar13,0);
    plVar12 = *(long **)(param_1 + 0x30);
    if (plVar12 == (long *)0x0) break;
    lVar13 = *(long *)(param_1 + 0x28);
    dVar1 = (double)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    plVar12 = *(long **)(param_1 + 0x30);
    if (plVar12 == (long *)0x0) break;
    dVar2 = (double)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    plVar12 = *(long **)(param_1 + 0x30);
    if (plVar12 == (long *)0x0) break;
    dVar3 = (double)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    plVar12 = *(long **)(param_1 + 0x30);
    if (plVar12 == (long *)0x0) break;
    dVar4 = (double)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    plVar12 = *(long **)(param_1 + 0x30);
    if (plVar12 == (long *)0x0) break;
    (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    plVar12 = *(long **)(param_1 + 0x30);
    if (plVar12 == (long *)0x0) break;
    (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (lVar13 == 0) break;
    Dino_BusSand_App_UI_HomePuffs__Emit_22e5d7c
              (uVar15,fVar16,fVar17,(float)dVar1 * 3.0 + 4.0,(float)dVar2 * fVar9 + fVar8,
               (float)dVar3 * fVar10 + fVar6,(float)dVar4 * 0.5 + fVar5,lVar13,0);
    iVar14 = iVar14 + -1;
    if (iVar14 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

